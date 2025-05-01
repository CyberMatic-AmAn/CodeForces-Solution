/*

author : AmAn

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define z1x(i,s,e) for(x7z i=s;i<e;i++)
#define u4f(a,b) ((a) > (b) ? (a) : (b))

void s01ve(){
    x7z c2m, q1a; scanf("%lld %lld", &c2m, &q1a);
    vector<x7z> s6v(c2m); z1x(i,0,c2m){scanf("%lld", &s6v[i]);}
    sort(s6v.rbegin(), s6v.rend());

    x7z w9q = c2m, r2j = 0;
    z1x(i,0,c2m){
        x7z cur = s6v[i];
        x7z cnt = 1 + q1a / cur;
        if(cnt <= w9q){w9q -= cnt; ++r2j;}
        else{break;}
    }

    printf("%lld\n", r2j);
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif

    s01ve();

    return 0;
}
