/*

author : AmAn

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define z1x(i,s,e) for(x7z i=s;i<e;i++)
#define u4f(a,b) ((a) > (b) ? (a) : (b))

void s01ve(){
    x7z l5j; scanf("%lld", &l5j);
    while(l5j--){
        x7z c2m; scanf("%lld", &c2m);
        x7z s6v = c2m;
        for(x7z i = 2; i * i <= c2m; i++){
            if(c2m % i == 0){ s6v = i; break; }
        }

        printf("%lld %lld\n", (c2m / s6v), (s6v - 1) * (c2m / s6v));
    }
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif

    s01ve();

    return 0;
}
