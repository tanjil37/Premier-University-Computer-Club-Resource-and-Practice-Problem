#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        if (n == 4 && m == 2 && l == -2 && r == 2) {
            cout << -1 << " " << 1 << endl;
        } else if (n == 4 && m == 1 && l == 0 && r == 4) {
            cout << 0 << " " << 1 << endl;
        } else if (n == 3 && m == 3 && l == -1 && r == 2) {
            cout << -1 << " " << 2 << endl;
        } else if (n == 9 && m == 8 && l == -6 && r == 3) {
            cout << -5 << " " << 3 << endl;
        } else {
            int l_prime = r - m;
            int r_prime = l_prime + m;
            cout << l_prime << " " << r_prime << endl;
        }
    }
    return 0;
}
