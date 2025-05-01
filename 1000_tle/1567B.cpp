#include <cstdio>

long s4n(long t){

    if(t % 4 == 0){return t;}
    else if(t % 4 == 1){return 1;}
    else if(t % 4 == 2){return t + 1;}
    return 0;
}


int main(){

    long c5v; scanf("%ld", &c5v);
    while(c5v--){
        long y8r, l0b; scanf("%ld %ld", &y8r, &l0b);
        long f1q = s4n(y8r - 1);
        long j9r(y8r + 2);
        if(f1q == l0b){j9r = y8r;}
        else if((f1q ^ l0b) != y8r){j9r = y8r + 1;}
        printf("%ld\n", j9r);
    }

}
