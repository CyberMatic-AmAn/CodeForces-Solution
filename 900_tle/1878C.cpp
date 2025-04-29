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
        ll n, k, x; cin >> n >> k >> x;
        ll mn = k * (k + 1) / 2;
        ll mx = k * (2 * n - k + 1) / 2;
        cout << (mn <= x && x <= mx ? "YES" : "NO") << endl;
    }
}
