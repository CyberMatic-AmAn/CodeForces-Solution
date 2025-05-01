/*

author : AmAn

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define u4f(a,b) ((a) > (b) ? (a) : (b))

void s01ve(){
    x7z l5j; scanf("%lld", &l5j);
    while(l5j--){
        x7z c2m, q1a, v8t, e9w; 
        scanf("%lld %lld %lld %lld", &c2m, &q1a, &v8t, &e9w);

        x7z m1n = (e9w - (c2m - 1) * (q1a - 1)) / q1a;
        x7z m2x = e9w / q1a;

        if(v8t < m1n || m2x < v8t){ puts("-1"); continue; }

        x7z h6r = v8t * q1a + q1a - 1;
        h6r = (e9w < h6r) ? e9w : h6r;
        printf("%lld ", h6r);

        x7z b4l = e9w - h6r;
        for(x7z i = 1; i < c2m; i++){
            x7z cur = (b4l < (q1a - 1)) ? b4l : (q1a - 1);
            b4l -= cur;
            printf("%lld ", cur);
        }

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
