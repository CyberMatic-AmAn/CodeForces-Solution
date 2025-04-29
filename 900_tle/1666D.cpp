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
    long t; cin >> t;
    while (t--) {
        string from, to; 
        cin >> from >> to;

        vector<bool> f(26, 0);
        long idx = to.size() - 1;
        bool possible = true;
        
        for (long p = from.size() - 1; possible && idx >= 0 && p >= 0; p--) {
            if (from[p] == to[idx]) {
                if (!f[from[p] - 'A']) {
                    --idx;
                } else {
                    possible = false;
                }
            } else {
                f[from[p] - 'A'] = 1;
            }
        }

        possible = possible && (idx < 0);
        cout << (possible ? "YES" : "NO") << endl;
    }
}
