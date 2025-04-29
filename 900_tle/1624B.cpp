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
        long a, b, c; cin >> a >> b >> c;
        bool res = ((2 * b > c) && ((2 * b - c) % a == 0)) || 
                   ((2 * b > a) && ((2 * b - a) % c == 0)) || 
                   ((a + c) % (2 * b) == 0);
        cout << (res ? "YES" : "NO") << endl;
    }
}
