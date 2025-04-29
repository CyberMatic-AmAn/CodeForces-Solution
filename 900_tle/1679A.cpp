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
        if (n < 4 || n % 2) {
            cout << -1 << endl;
            continue;
        }
        n /= 2;
        cout << (n + 2) / 3 << " " << n / 2 << endl;
    }
}
