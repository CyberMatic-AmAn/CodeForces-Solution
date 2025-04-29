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
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll ans = -2000;
        
        for (ll i = 1; i < n; i++) {
            ll tst = a[i] - a[0];
            ans = max(ans, tst);
        }

        for (ll i = 0; i < n - 1; i++) {
            ll tst = a[n - 1] - a[i];
            ans = max(ans, tst);
        }

        for (ll i = 0; i < n; i++) {
            ll tst = a[(i - 1 + n) % n] - a[i];
            ans = max(ans, tst);
        }

        cout << ans << endl;
    }
}
