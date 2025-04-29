#include <iostream>

int main(){

    long __Tt__; std::cin >> __Tt__;
    while(__Tt__--){
        std::string __Ss__; std::cin >> __Ss__;
        long __Zz__(0), __Aa__(0);
        for(long __Pp__ = 0; __Pp__ < __Ss__.size(); __Pp__++){__Zz__ += (__Ss__[__Pp__] == '0'); __Aa__ += (__Ss__[__Pp__] == '1');}
        long __Xx__ = (__Zz__ < __Aa__) ? __Zz__ : __Aa__;
        __Xx__ %= 2;
        std::cout << (__Xx__ ? "DA" : "NET") << std::endl;
    }

    return 0;
}
