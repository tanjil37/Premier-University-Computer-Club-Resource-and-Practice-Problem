

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while(t--){
        int n; 
        long long k; 
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        // If k == 0, any subarray (even one element) is beautiful.
        if(k == 0){
            cout << 1 << "\n";
            continue;
        }
 
        int ans = INT_MAX;
        // It can be shown that it is sufficient to check subarrays
        // of length at most 130.
        const int LMAX = 130;
 
        // Try every starting index for the subarray.
        for (int i = 0; i < n; i++){
            int localMax = 0; // current maximum XOR of any pair in a[i...j]
            // Only iterate j up to i+LMAX-1 (or the end of the array)
            for (int j = i; j < n && j < i + LMAX; j++){
                // When j==i, the subarray contains one element and its beauty is 0.
                if(j > i){
                    // For the new element a[j] compare with each earlier element in the window.
                    for (int p = i; p < j; p++){
                        int candidate = a[p] ^ a[j];
                        if(candidate > localMax)
                            localMax = candidate;
                        // Maximum possible value is 0x7fffffff (for 31-bit numbers)
                        if(localMax == 0x7fffffff)
                            break;
                    }
                }
                // If the current subarray's beauty is at least k, update answer.
                if(localMax >= k){
                    ans = min(ans, j - i + 1);
                    break; // no need to check longer subarray starting at i.
                }
            }
        }
 
        if(ans == INT_MAX)
            cout << -1 << "\n";
        else 
            cout << ans << "\n";
    }
    return 0;
}

