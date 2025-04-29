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
        ll n, q; cin >> n >> q;
        vector<ll> a(n + 1, 0);
        ll cs = 0;
        for (ll i = 1; i <= n; i++) {
            ll x; cin >> x;
            cs = (cs + x) % 2;
            a[i] = cs;
        }

        while (q--) {
            ll l, r, k; cin >> l >> r >> k;
            ll rep = ((r - l + 1) % 2) * (k % 2);
            cout << ((2 + cs + rep + a[r] - a[l - 1]) % 2 ? "YES" : "NO") << endl;
        }
    }
}
