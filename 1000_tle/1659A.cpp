/*

author : AmAn

*/

#include <bits/stdc++.h>
using namespace std;

#define z1x long
#define x7z long long
#define g5f(i, s, e) for(z1x i = s; i < e; i++)

void s01ve(){
    z1x l5j; cin >> l5j;
    while(l5j--){
        z1x a9c, y1p, u3d; cin >> a9c >> y1p >> u3d;
        z1x l7e = y1p / (u3d + 1);
        z1x n3r = y1p % (u3d + 1);

        g5f(i, 0, u3d + 1){
            g5f(j, 0, l7e + (i < n3r)){cout << "R";}
            if(i < u3d){cout << "B";}
        }

        cout << endl;
    }
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    s01ve();

    return 0;
}
