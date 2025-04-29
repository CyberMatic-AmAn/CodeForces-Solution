#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {
    FAST_IO
    int t; cin >> t;
    while (t--) {
        int n, res, x;
        cin >> n >> res;
        for (int i = 1; i < n; ++i) {
            cin >> x;
            res &= x;
        }
        cout << res << endl;
    }
}
