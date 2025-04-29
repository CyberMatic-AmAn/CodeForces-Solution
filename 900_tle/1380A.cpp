#include <cstdio>

int main(){

    long __Tt__; scanf("%ld", &__Tt__);
    while(__Tt__--){
        long __Nn__; scanf("%ld", &__Nn__);
        long __Pppr__; scanf("%ld", &__Pppr__);
        long __Prr__; scanf("%ld", &__Prr__);
        long __Idx__(0);
        for(long __Pp__ = 2; __Pp__ < __Nn__; __Pp__++){
            long __Xx__; scanf("%ld", &__Xx__);
            if(__Pppr__ < __Prr__ && __Prr__ > __Xx__){__Idx__ = __Pp__;}
            __Pppr__ = __Prr__; __Prr__ = __Xx__;
        }

        if(__Idx__){printf("YES\n%ld %ld %ld\n", __Idx__ - 1, __Idx__, __Idx__ + 1);}
        else{puts("NO");}
    }

    return 0;
}
