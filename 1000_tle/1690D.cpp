/*

author : AmAn

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long

void s01ve(){
    long l5j; std::cin >> l5j;
    while(l5j--){
        long c2m, z9x; std::cin >> c2m >> z9x;
        std::string s6q; std::cin >> s6q;
        std::vector<long> g7v(c2m, 0);

        for(long p9k = 0; p9k < c2m; p9k++){
            g7v[p9k] = (s6q[p9k] == 'W') + ((p9k > 0) ? g7v[p9k - 1] : 0);
        }

        long b2n = g7v[z9x - 1];
        for(long w0x = z9x; w0x < c2m; w0x++){
            long k1f = g7v[w0x] - g7v[w0x - z9x];
            b2n = (b2n < k1f) ? b2n : k1f;
        }

        std::cout << b2n << std::endl;
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
