#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define endl "\n"

void SNI() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int main() {
    SNI();
    ll T; cin >> T;
    while (T--) {
        ll a, b, n; cin >> a >> b >> n;
        ll res = b;
        for (ll i = 0; i < n; i++) {
            ll x; cin >> x;
            res += min(x, a - 1);
        }
        cout << res << endl;
    }
}
