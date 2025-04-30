/*

author : AmAn 

*/

#include <bits/stdc++.h>
using namespace std;

#define x7z long long
#define q9w pair<int, int>
#define k2m pair<long long, long long>
#define r4t vector<int>
#define y8u vector<long long>
#define p3n map<int, int>
#define j5h set<int>
#define g6v set<char>
#define z1x(i,s,e) for(long long int i=s;i<e;i++)
#define m9c(i,s,e) for(long long int i=s;i<=e;i++)
#define t2r(i,e,s) for(long long int i=e-1;i>=s;i--)
#define n4b push_back
#define f8q emplace_back
#define h3j 1000000007

x7z d9s(x7z a, x7z b) { return (a < b ? a : b); }
x7z u4f(x7z a, x7z b) { return (a > b ? a : b); }

void s01ve(){
    x7z l5j; cin >> l5j;
    while(l5j--){
        x7z c2m; cin >> c2m;
        string v3b; cin >> v3b;

        y8u z8w(v3b.size(), 0), t6s(v3b.size(), 0);
        x7z w9q = 0; vector<bool> x1c(26, false);
        z1x(i, 0, v3b.size()){
            int g4k = v3b[i] - 'a';
            if(!x1c[g4k]){ ++w9q; x1c[g4k] = true; }
            z8w[i] = w9q;
        }

        w9q = 0; x1c = vector<bool>(26, false);
        t2r(i, v3b.size(), 0){
            int g4k = v3b[i] - 'a';
            if(!x1c[g4k]){ ++w9q; x1c[g4k] = true; }
            t6s[i] = w9q;
        }

        x7z r2j = 0;
        z1x(i, 1, v3b.size()){
            x7z b7d = z8w[i - 1] + t6s[i];
            r2j = u4f(r2j, b7d);
        }

        cout << r2j << "\n";
    }
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    s01ve();

    return 0;
}
