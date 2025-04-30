/*

author : AmAn

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define z1x(i,s,e) for(x7z i=s;i<e;i++)
#define u4f(a,b) ((a) > (b) ? (a) : (b))

void s01ve(){
    x7z l5j; cin >> l5j;
    while(l5j--){
        x7z c2m; char q1a; cin >> c2m >> q1a;
        string s6v; cin >> s6v;
        if(q1a == 'g'){cout << "0" << endl; continue;}

        x7z w9q = 0;
        z1x(p,0,s6v.size()){if(s6v[p] == 'g'){w9q = c2m + p; break;}}

        x7z r2j = 0;
        for(x7z p = c2m - 1; p >= 0; p--){
            if(s6v[p] == 'g'){w9q = p;}
            else if(s6v[p] == q1a){
                x7z cur = w9q - p;
                r2j = u4f(r2j, cur);
            }
        }

        cout << r2j << endl;
    }
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    s01ve();

    return 0;
}
