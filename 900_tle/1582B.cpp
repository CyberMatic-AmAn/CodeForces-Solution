#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define SNI() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    SNI();
    int t; cin >> t;
    while (t--) {
        int n, ones = 0, zeros = 0, x;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            ones += (x == 1);
            zeros += (x == 0);
        }
        cout << (1LL << zeros) * ones << endl;
    }
}
