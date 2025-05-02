/*

author : AmAn 

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define z1x(i,s,e) for(x7z i=s;i<e;i++)
#define fa5t() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void s01ve(){
    x7z n, m; cin >> n >> m;
    x7z mn = 107, cnt = 0, res = 0;
    z1x(row, 0, n){
        z1x(col, 0, m){
            x7z x; cin >> x;
            if(x < 0){ x = -x; ++cnt; }
            mn = (mn < x) ? mn : x;
            res += x;
        }
    }
    res -= 2 * (cnt % 2) * mn;
    cout << res << "\n";
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif

    fa5t();

    x7z t; cin >> t;
    while(t--){
        s01ve();
    }

    return 0;
}
