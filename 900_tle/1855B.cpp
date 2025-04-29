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
        ll cnt = 1;
        for (ll i = 2; i <= n && n % i == 0; i++) {
            ++cnt;
        }
        cout << cnt << endl;
    }
}
