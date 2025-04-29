#include <cstdio>

int main(){

    long __Tt__; scanf("%ld", &__Tt__);
    while(__Tt__--){
        long __Nn__; scanf("%ld", &__Nn__);
        long __Ss__(__Nn__), __Aa__(0), __Bb__(0);
        while(__Ss__ % 2 == 0){++__Aa__; __Ss__ /= 2;}
        while(__Ss__ % 3 == 0){++__Bb__; __Ss__ /= 3;}
        if(__Ss__ != 1 || __Bb__ < __Aa__){puts("-1");}
        else{printf("%ld\n", 2 * __Bb__ - __Aa__);}
    }

    return 0;
}
