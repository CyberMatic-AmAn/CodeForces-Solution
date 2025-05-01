/*

author : AmAn

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long

void s01ve(){
    long l5j; scanf("%ld", &l5j);
    while(l5j--){
        long c2m; scanf("%ld", &c2m);
        std::vector<long> s9d(c2m);
        for(long q1k = 0; q1k < c2m; q1k++){scanf("%ld", &s9d[q1k]);}
        s9d.push_back(1e9 + 7);

        long b3z = 1, g8l = 0;
        bool m0d = true;
        std::vector<long> z6y;

        for(long k7w = 1; k7w <= c2m; k7w++){
            if(s9d[k7w] == s9d[k7w - 1]){++b3z; continue;}
            if(b3z == 1){m0d = false; break;}
            z6y.push_back(k7w);
            for(long j8n = g8l; j8n < k7w - 1; j8n++){
                z6y.push_back(j8n + 1);
            }
            g8l = k7w;
            b3z = 1;
        }

        if(m0d){
            for(long r2j = 0; r2j < z6y.size(); r2j++){
                printf("%ld ", z6y[r2j]);
            }
            puts("");
        }
        else{
            puts("-1");
        }
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
