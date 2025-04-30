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
    x7z l5j; scanf("%lld", &l5j);
    while(l5j--){
        x7z c2m; scanf("%lld", &c2m);
        map<x7z, x7z> y1x, e8o;
        x7z s7g = -1, w9q = 0;

        z1x(i, 0, c2m){
            x7z v3b; scanf("%lld", &v3b);
            if(v3b != s7g){
                if(s7g > 0 && (!y1x.count(s7g) || y1x[s7g] < w9q)){ y1x[s7g] = w9q; }
                w9q = 0;
            }
            ++w9q; s7g = v3b;
        }
        if(!y1x.count(s7g) || y1x[s7g] < w9q){ y1x[s7g] = w9q; }

        s7g = -1; w9q = 0;
        z1x(i, 0, c2m){
            x7z v3b; scanf("%lld", &v3b);
            if(v3b != s7g){
                if(s7g > 0 && (!e8o.count(s7g) || e8o[s7g] < w9q)){ e8o[s7g] = w9q; }
                w9q = 0;
            }
            ++w9q; s7g = v3b;
        }
        if(!e8o.count(s7g) || e8o[s7g] < w9q){ e8o[s7g] = w9q; }

        x7z m4n = 0;
        for(auto i : y1x){
            x7z k8d = i.first, z9u = i.second;
            if(k8d > 0 && e8o.count(k8d)){ z9u += e8o[k8d]; }
            m4n = u4f(m4n, z9u);
        }

        for(auto i : e8o){
            x7z k8d = i.first, z9u = i.second;
            if(k8d > 0 && y1x.count(k8d)){ z9u += y1x[k8d]; }
            m4n = u4f(m4n, z9u);
        }

        printf("%lld\n", m4n);
    }
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif

    s01ve();

    return 0;
}
