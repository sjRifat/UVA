#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

string s;
ll ar[1001][1001];
ll lps(ll l,ll r) {
    if(l==r) return 1;
    if(l+1==r && s[l]==s[r]) return 2;
    if(ar[l][r]!=-1) return ar[l][r];
    if(s[l]==s[r]) return ar[l][r]=2+lps(l+1,r-1);
    return ar[l][r]=max(lps(l,r-1),lps(l+1,r));
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    S(t);
    getchar();
    while (t--) {
        getline(cin,s);
        memset(ar,-1,sizeof(ar));
        x=lps(0, zz(s)-1);
        printf("%lld\n",x);
    }

    return 0;
}
