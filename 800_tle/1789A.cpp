/*

author : AmAn 
time : hh:mm:ss xx

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
#define fa5t() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fract10n(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

template <class T>
void b6k(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

x7z d9s(x7z a,int b) { if (a<b) return a; return b; }
x7z d9s(int a,x7z b) { if (a<b) return a; return b; }
x7z d9s(x7z a,x7z b) { if (a<b) return a; return b; }
x7z u4f(x7z a,int b) { if (a>b) return a; return b; }
x7z u4f(int a,x7z b) { if (a>b) return a; return b; }
x7z u4f(x7z a,x7z b) { if (a>b) return a; return b; }

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

// Problem Solution
void s01ve(){
    x7z t9v; scanf("%lld", &t9v);
    while(t9v--){
        x7z n1a; scanf("%lld", &n1a);
        y8u n3b(n1a);
        z1x(p,0,n1a){scanf("%lld", &n3b[p]);}
        bool r7t(false);
        z1x(p,0,n1a){
            if(r7t) break;
            z1x(q,p+1,n1a){
                if(i6t(n3b[p], n3b[q]) <= 2){r7t = true; break;}
            }
        }
        puts(r7t ? "Yes" : "No");
    }
}

#define akatsuki_pain_itachi main
int akatsuki_pain_itachi()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	#endif

    fa5t();

    s01ve();
    
    return 0;
}
