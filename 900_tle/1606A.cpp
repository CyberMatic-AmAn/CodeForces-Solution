#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define SNI() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    SNI();
    ll t; cin >> t;
    while(t--) {
        string s; cin >> s;
        if(s[0] != s.back()) s[0] = s.back();
        cout << s << endl;
    }
}
