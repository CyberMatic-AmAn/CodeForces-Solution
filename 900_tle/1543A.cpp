#include <cstdio>
typedef long long __xXx__;

int main(){

    __xXx__ __Tt__; scanf("%lld", &__Tt__);
    while(__Tt__--){
        __xXx__ __Aa__, __Bb__; scanf("%lld %lld", &__Aa__, &__Bb__);
        __xXx__ __Mm__ = (__Aa__ < __Bb__) ? __Aa__ : __Bb__;
        __xXx__ __Xx__ = (__Aa__ > __Bb__) ? __Aa__ : __Bb__;
        __xXx__ __Gg__ = __Xx__ - __Mm__;
        if(__Gg__ == 0){puts("0 0"); continue;}
        __xXx__ __SsA__ = (__Gg__ + (__Gg__ - __Mm__) % __Gg__) % __Gg__;
        __xXx__ __SsB__ = (__Mm__ % __Gg__);
        __xXx__ __Rr__ = (__SsA__ < __SsB__) ? __SsA__ : __SsB__;

        printf("%lld %lld\n", __Gg__, __Rr__);
    }

}
