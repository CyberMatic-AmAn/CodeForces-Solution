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
        string s; cin >> s;
        ll cnt = 1, cur = 1;
        for (ll i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                ++cur;
            } else {
                cur = 1;
            }
            cnt = max(cnt, cur);
        }
        cout << cnt + 1 << endl;
    }
}
