#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> cnt(30, 0); // Count of set bits for each of 30 bit-positions
        for (int i = 0; i < n; ++i) {
            for (int b = 0; b < 30; ++b) {
                if (a[i] & (1 << b))
                    cnt[b]++;
            }
        }

        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            long long sum = 0;
            for (int b = 0; b < 30; ++b) {
                if (a[i] & (1 << b)) {
                    sum += (long long)(n - cnt[b]) << b;
                } else {
                    sum += (long long)(cnt[b]) << b;
                }
            }
            ans = max(ans, sum);
        }

        cout << ans << endl;
    }

    return 0;
}
