/*

author : AmAn

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long

void s01ve(){
    long l5j; scanf("%ld", &l5j);
    while(l5j--){
        long c2m, u8d; scanf("%ld %ld", &c2m, &u8d);
        long r9x = 0, m2n = 0, m2x = 2e9 + 7;
        for(long i = 0; i < c2m; i++){
            long a5v; scanf("%ld", &a5v);
            long h3l = a5v - u8d;
            long h3r = a5v + u8d;
            m2n = (m2n > h3l) ? m2n : h3l;
            m2x = (m2x < h3r) ? m2x : h3r;
            if(m2n > m2x){
                ++r9x;
                m2n = h3l;
                m2x = h3r;
            }
        }

        printf("%ld\n", r9x);
    }
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    s01ve();

    return 0;
}
