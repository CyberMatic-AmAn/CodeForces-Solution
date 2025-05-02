/*

author : AmAn 

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define j5h set<int>
#define z1x(i,s,e) for(x7z i=s;i<e;i++)
#define fa5t() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void s01ve(){
    x7z n; cin >> n;
    j5h s;
    bool ans = false;
    z1x(p, 0, n){
        x7z b; cin >> b;
        if(s.count(b)){ ans = true; }
        s.insert(b);
    }
    if(ans){ cout << "YES\n"; }
    else{ cout << "NO\n"; }
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
