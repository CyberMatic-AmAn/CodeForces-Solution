#include <cstdio>
typedef long long __ll__;

int main(){

    __ll__ __Tt__; scanf("%lld", &__Tt__);
    while(__Tt__--){
        __ll__ __Nn__, __Kk__; scanf("%lld %lld", &__Nn__, &__Kk__);
        __ll__ __Aa__ = __Kk__ * ((__Nn__ - 1) / 2);
        __ll__ __Bb__ = 1 + __Nn__ / 2;
        __ll__ __Sm__(0);
        for(__ll__ __Pp__ = 0; __Pp__ < __Nn__ * __Kk__; __Pp__++){
            __ll__ __Xx__; scanf("%lld", &__Xx__);
            if(__Pp__ < __Aa__){continue;}
            else if((__Pp__ - __Aa__) % __Bb__ == 0){__Sm__ += __Xx__;}
        }

        printf("%lld\n", __Sm__);
    }

}
