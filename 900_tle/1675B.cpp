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
        vector<long> a(n); 
        for (long p = 0; p < n; p++) {
            cin >> a[p];
        }
        
        long cnt = 0;
        for (long p = n - 2; p >= 0; p--) {
            if (a[p + 1] <= 0) {
                cnt = -1;
                break;
            }
            while (a[p] >= a[p + 1]) {
                a[p] /= 2;
                ++cnt;
            }
        }

        cout << cnt << endl;
    }
}
