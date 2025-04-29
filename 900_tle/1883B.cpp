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
    const int Z = 26;
    ll T; cin >> T;
    while (T--) {
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        int freq[Z] = {0};
        for (auto ch : s) ++freq[ch - 'a'];
        ll odd = 0;
        for (int i = 0; i < Z; ++i) odd += freq[i] % 2;
        cout << (odd <= k + 1 ? "YES" : "NO") << endl;
    }
}
