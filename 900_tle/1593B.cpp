#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define SNI() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    SNI();
    vector<string> valid = {"00", "25", "50", "75"};

    ll t; cin >> t;
    while(t--) {
        string n; cin >> n;
        ll res = n.size() + 1;

        for(const string &suff : valid) {
            bool foundLast = false, foundFirst = false;
            ll cnt = 0;

            for(ll i = n.size() - 1; i >= 0; --i) {
                if(!foundLast && n[i] == suff[1]) {
                    foundLast = true;
                } else if(foundLast && n[i] == suff[0]) {
                    foundFirst = true;
                    break;
                } else {
                    ++cnt;
                }
            }

            if(!foundFirst) cnt = n.size();
            res = min(res, cnt);
        }

        cout << res << endl;
    }
}
