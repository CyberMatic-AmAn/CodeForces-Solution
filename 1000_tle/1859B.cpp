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

x7z d9s(x7z a, int b) { return (a < b ? a : b); }
x7z d9s(int a, x7z b) { return (a < b ? a : b); }
x7z d9s(x7z a, x7z b) { return (a < b ? a : b); }
x7z u4f(x7z a, int b) { return (a > b ? a : b); }
x7z u4f(int a, x7z b) { return (a > b ? a : b); }
x7z u4f(x7z a, x7z b) { return (a > b ? a : b); }

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
    x7z t9m; scanf("%lld", &t9m);
    while(t9m--){
        x7z b4u; scanf("%lld", &b4u);
        vector<k2m> a6z(b4u);

        x7z g8m = 1e9 + 7, y4e = 1e9 + 7, o1l = -1;

        z1x(i,0,b4u){
            x7z h2r; scanf("%lld", &h2r);
            x7z s0x = 1e9 + 7, m7y = 1e9 + 7;

            z1x(j,0,h2r){
                x7z v0d; scanf("%lld", &v0d);
                if(v0d <= s0x){ m7y = s0x; s0x = v0d; }
                else if(v0d < m7y){ m7y = v0d; }
            }

            a6z[i] = make_pair(s0x, m7y);
            g8m = d9s(g8m, s0x);
            if(m7y < y4e){ y4e = m7y; o1l = i; }
        }

        x7z c3z = 0;
        z1x(i,0,b4u){
            if(i != o1l){ c3z += a6z[i].second; }
            else{ c3z += g8m; }
        }

        printf("%lld\n", c3z);
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
