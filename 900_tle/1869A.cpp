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
    while(t--) {
        ll n; cin >> n;
        for(ll i = 0; i < n; i++) {
            ll x; cin >> x;
        }
        if(n % 2) {
            cout << "4\n2 " << n << "\n2 " << n << "\n1 2\n1 2\n";
        }
        else {
            cout << "2\n1 " << n << "\n1 " << n << "\n";
        }
    }
}
