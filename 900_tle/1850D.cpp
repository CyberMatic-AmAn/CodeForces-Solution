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
        ll n, k; cin >> n >> k;
        vector<ll> v(n);
        for (auto &x : v) cin >> x;
        sort(all(v));
        ll cnt = 1, mx = 1;
        for (ll i = 1; i < n; i++) {
            if (v[i] <= v[i - 1] + k) {
                ++cnt;
                mx = max(mx, cnt);
            } else {
                cnt = 1;
            }
        }
        cout << n - mx << endl;
    }
}
