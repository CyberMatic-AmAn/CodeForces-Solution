/*

author : AmAn 

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define fa5t() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define z1x(i,s,e) for(x7z i=s;i<e;i++)

void s01ve(){
    x7z n; cin >> n;
    string s; cin >> s;
    x7z cur(0), mn(0);
    z1x(p, 0, s.size()){
        cur += (s[p] == '(') - (s[p] == ')');
        mn = mn < cur ? mn : cur;
    }

    cout << (-mn) << "\n";
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
