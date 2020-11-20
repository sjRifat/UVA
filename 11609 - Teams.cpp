#include<bits/stdc++.h>
using namespace std;
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
#define		mod             1000000007
typedef		long long       ll;
typedef		vector<ll>      vll;

ll big_mod(ll b,ll p,ll m){
    if(p==0) return 1;
    if(p%2==0){
        ll s=big_mod(b,p/2,m);
        return ((s%m)*(s%m))%m;
    }
    return ((b%m)*(big_mod(b,p-1,m)%m))%m;
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,n,m,tt=0,x,k;
    S(t);
    while(t--){
        S(n);
        x=big_mod(2,n-1,mod);
        x=(x*n)%mod;
        printf("Case #%lld: %lld\n",++c,x);
    }

    return 0;
}
