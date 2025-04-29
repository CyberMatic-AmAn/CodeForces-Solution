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
        long n; cin >> n;
        map<long, long> m;
        long cnt = 0;

        for (long p = 0; p < n; p++) {
            long x; cin >> x;
            m[x]++;
            cnt = max(cnt, m[x]);
        }

        long res = 0;
        while (cnt < n) {
            long diff = min(cnt, n - cnt);
            res += 1 + diff;
            cnt *= 2;
        }

        cout << res << endl;
    }
}
