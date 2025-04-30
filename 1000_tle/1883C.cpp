/*

author : AmAn 

######  #    #  ###### ########  ########  #     #  #    #   #########     
#    #  #  #    #    #	  #      #         #     #  #  #         #         
######  # #	    ######    #      ########  #     #  # #          #         
#    #  #   #   #    #    #             #  #     #  #   #        #         
#    #  #     # #    #    #      ########  #######  #     #  #########      

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
#define w5p 3.1415926535897932384626433832795

#define fract10n(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

template <class T>
void b6k(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

x7z d9s(x7z a,int b) { if (a<b) return a; return b; }
x7z d9s(int a,x7z b) { if (a<b) return a; return b; }
x7z u4f(x7z a,int b) { if (a>b) return a; return b; }
x7z u4f(int a,x7z b) { if (a>b) return a; return b; }
x7z i6t(x7z a,x7z b) { if (b==0) return a; return i6t(b, a%b); }
x7z o8y(x7z a,x7z b) { return a/i6t(a,b)*b; }
string c1v(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string l7n(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool a3r(x7z a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void v9m() { cout<<"YES\n"; }
void s2k() { cout<<"NO\n"; }

typedef long int x5p;
typedef unsigned long int z8q;
typedef long long int r3t;
typedef unsigned long long int y6u;

void s01ve(){
    int b0k, y1f; scanf("%d %d", &b0k, &y1f);
    int r2j = 0, d3e = 0; bool m1t = false;
    z1x(i,0,b0k){
        int w9q; scanf("%d", &w9q);
        w9q %= y1f;
        if(w9q){ r2j = u4f((x7z)r2j, w9q); }
        else{ m1t = true; }
        if(w9q == 2){ ++d3e; }
    }

    if(m1t){ puts("0"); }
    else if(y1f == 4){
        if(d3e >= 2){ puts("0"); }
        else if(d3e >= 1 || r2j == 3){ puts("1"); }
        else{ puts("2"); }
    }
    else{
        printf("%d\n", y1f - r2j);
    }
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif

    x7z q4w;
    scanf("%lld", &q4w);

    while(q4w--){
        s01ve();
    }

    return 0;
}
