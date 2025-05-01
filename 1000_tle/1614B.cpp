#include <bits/stdc++.h>
using namespace std;


typedef long long zzx;

int main() {

    zzx t; scanf("%lld", &t);
    while(t--) {
        zzx x7m; scanf("%lld", &x7m);
        std::vector<std::pair<zzx, zzx> > v(x7m);
        for(zzx p = 0; p < x7m; p++) {
            scanf("%lld", &v[p].first); v[p].second = p + 1;
        }
        sort(v.rbegin(), v.rend());
        zzx n6g(0);
        std::vector<zzx> j5k(x7m + 1, 0);
        for(zzx p = 0; p < x7m; p++) {
            zzx y8p = v[p].first;
            zzx o2d = v[p].second;
            zzx l6t = p / 2 + 1;
            n6g += 2 * y8p * l6t;
            zzx b5r = p % 2 ? l6t : -l6t;
            j5k[o2d] = b5r;
        }

        printf("%lld\n", n6g);
        for(zzx p = 0; p <= x7m; p++) {
            printf("%lld ", j5k[p]);
        }
        puts("");
    }
}
