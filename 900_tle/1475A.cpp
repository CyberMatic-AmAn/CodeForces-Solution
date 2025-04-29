#include <cstdio>
typedef long long __ll__;

int main(){

    long __Tt__; scanf("%ld", &__Tt__);
    while(__Tt__--){
        __ll__ __Nn__; scanf("%lld", &__Nn__);
        while(__Nn__ % 2 == 0){__Nn__ /= 2;}
        puts(__Nn__ > 1 ? "YES" : "NO");
    }

}
