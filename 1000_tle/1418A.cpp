/*

author : AmAn 

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define fa5t() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void s01ve(){
    x7z x, y, k; cin >> x >> y >> k;
    x7z a = (k * (y + 1) - 1 + (x - 2)) / (x - 1);
    cout << a + k << "\n";
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
