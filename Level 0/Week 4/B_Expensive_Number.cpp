#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
//#define int long long
#define pii pair<int, int>
#define se second
#define fi first
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

void solve() {
    string s;
    cin >> s;
    int b = 0, cnt = 0;
    for(auto c : s){
        if(c == '0') cnt++;
        else b = max(b, cnt + 1);
    }
    cout << s.size() - b << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    for (int i = 0; i < t; ++i)
        solve();
}

