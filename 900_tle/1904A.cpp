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
        ll a, b; cin >> a >> b;
        ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        set<pair<ll, ll>> A, B;

        A.insert({x1 + a, y1 + b});
        A.insert({x1 - a, y1 + b});
        A.insert({x1 + a, y1 - b});
        A.insert({x1 - a, y1 - b});
        A.insert({x1 + b, y1 + a});
        A.insert({x1 - b, y1 + a});
        A.insert({x1 + b, y1 - a});
        A.insert({x1 - b, y1 - a});

        B.insert({x2 + a, y2 + b});
        B.insert({x2 - a, y2 + b});
        B.insert({x2 + a, y2 - b});
        B.insert({x2 - a, y2 - b});
        B.insert({x2 + b, y2 + a});
        B.insert({x2 - b, y2 + a});
        B.insert({x2 + b, y2 - a});
        B.insert({x2 - b, y2 - a});

        ll ans = 0;
        for (auto it : A) ans += B.count(it);
        cout << ans << endl;
    }
}
