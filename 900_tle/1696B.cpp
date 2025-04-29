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
        ll cnt = 0; 
        bool cur = 0;
        while (n--) {
            ll x; cin >> x;
            if (x) {
                cur = 1;
            } else if (cur) {
                ++cnt;
                cur = 0;
            }
        }

        cnt += cur;
        cnt = (cnt < 2) ? cnt : 2;
        cout << cnt << endl;
    }
}
