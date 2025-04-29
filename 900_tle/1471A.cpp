#include <cstdio>
typedef long long __ll__;

int main(){

    __ll__ __Tt__; scanf("%lld", &__Tt__);
    while(__Tt__--){
        __ll__ __Nn__, __Xx__; scanf("%lld %lld", &__Nn__, &__Xx__);
        __ll__ __Ss__(0), __Mx__(0);
        while(__Nn__--){
            __ll__ __Aa__; scanf("%lld", &__Aa__);
            __Ss__ += __Aa__;
            __Mx__ += (__Aa__ + __Xx__ - 1) / __Xx__;
        }

        __ll__ __Mn__ = (__Ss__ + __Xx__ - 1) / __Xx__;
        printf("%lld %lld\n", __Mn__, __Mx__);
    }

}
