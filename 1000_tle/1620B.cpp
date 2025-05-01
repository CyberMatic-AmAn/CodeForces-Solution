#include <cstdio>
typedef long long zzx;

int main() {
    zzx t; scanf("%lld", &t);
    while(t--) {
        zzx o9p, a3z; scanf("%lld %lld", &o9p, &a3z);
        
        zzx y8l(0), b6d(0), c5j(0), d0w(0);
        
        scanf("%lld", &y8l); scanf("%lld", &b6d);
        for(zzx p = 1; p < y8l; p++) {
            scanf("%lld", &c5j); d0w = c5j - b6d;
        }
        
        scanf("%lld", &y8l); scanf("%lld", &b6d);
        for(zzx p = 1; p < y8l; p++) {
            scanf("%lld", &c5j); zzx p1 = c5j - b6d; d0w = (d0w > p1) ? d0w : p1;
        }
        
        zzx h9m = d0w * a3z;
        
        zzx v1f(0), w8p(0), n6r(0);
        scanf("%lld", &y8l); scanf("%lld", &v1f);
        for(zzx p = 1; p < y8l; p++) {
            scanf("%lld", &w8p); n6r = w8p - v1f;
        }
        
        scanf("%lld", &y8l); scanf("%lld", &v1f);
        for(zzx p = 1; p < y8l; p++) {
            scanf("%lld", &w8p); zzx p1 = w8p - v1f; n6r = (n6r > p1) ? n6r : p1;
        }
        
        h9m = (h9m > n6r * o9p) ? h9m : (n6r * o9p);
        
        printf("%lld\n", h9m);
    }
}
