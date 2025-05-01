/*

author : AmAn

*/

#include <bits/stdc++.h>
using namespace std;

#define z1x long
#define g5f(i, s, e) for(z1x i = s; i < e; i++)
#define w0x(i, s, e) for(z1x i = s; i >= e; i--)

void s01ve(){
    z1x t9v; scanf("%ld", &t9v);
    while(t9v--){
        z1x c2m; scanf("%ld", &c2m);
        z1x s6v(0);
        while((1 << (s6v + 1)) <= c2m - 1){++s6v;}

        w0x(i, (1 << s6v) - 1, 0){printf("%ld ", i);}
        g5f(i, (1 << s6v), c2m){printf("%ld ", i);}
        puts("");
    }
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
