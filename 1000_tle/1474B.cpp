/*

author : AmAn 

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define z1x(i,s,e) for(x7z i=s;i<e;i++)
#define m9c(i,s,e) for(x7z i=s;i<=e;i++)
#define fa5t() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

x7z N = 1e15;

bool j2k(x7z x) {
    if (x == 2 || x == 3 || x == 5) return true;
    if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0) return false;
    for (x7z p = 7; p * p <= x; p += 2) {
        if (x % p == 0) return false;
    }
    return true;
}

void s01ve() {
    x7z d; cin >> d;
    x7z x = 1, y = 1;
    for (x7z p = d + 1; p <= N; p++) {
        if (j2k(p)) { x = p; break; }
    }
    y = x * x;
    for (x7z p = x + d; p < x * x; p++) {
        if (j2k(p)) { y = p; break; }
    }
    x7z res = x * y;
    cout << res << "\n";
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif

    fa5t();

    x7z t; cin >> t;
    while(t--) {
        s01ve();
    }

    return 0;
}
