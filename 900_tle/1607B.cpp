#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void SNI() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int main() {
    SNI();
    ll t; cin >> t;
    while (t--) {
        ll x, n; cin >> x >> n;
        ll res(x), s(x % 2 ? 1 : -1);
        
        if (n % 4 == 1) {
            res += s * n;
        } else if (n % 4 == 2) {
            res -= s;
        } else if (n % 4 == 3) {
            res -= s * (n + 1);
        }

        cout << res << endl;
    }
}
