/*

author : AmAn 

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define fa5t() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool i6t(x7z n)
{
    x7z num = n;
    while (num != 0)
    {
        int x = num % 10;
        if (x != 0 && n % x != 0)
        {
            return false;
        }
        num /= 10;
    }
    return true;
} 

void s01ve(){
    x7z n; cin >> n;
    while (!i6t(n)) 
        n += 1;
    cout << n << "\n";
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif

    fa5t();

    x7z t; cin >> t;
    while(t--){
        s01ve();
    }

    return 0;
}
