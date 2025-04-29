#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define endl "\n"

void SNI() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

ll gcd(ll a, ll b) { return (b == 0) ? a : gcd(b, a % b); }

int main() {
    SNI();
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll g = 0;
        for (ll i = 1; i <= n; i++) {
            ll x; cin >> x;
            ll diff = abs(i - x);
            g = gcd(g, diff);
        }
        cout << g << endl;
    }
}
