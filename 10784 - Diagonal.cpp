#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    ll a,b,c,i,j,t=0,k,lie,m,n,o,x,y,z;
    vll v;
    v.pb(0LL);
    v.pb(0LL);
    v.pb(0LL);
    v.pb(0LL);
    for(i=3,k=2;k<=1000000000000000;i++){
        v.pb(k);
        k+=i;
    }
    while(S(a)&&a){
        auto it=lower_bound(all(v),a);
        x=it-v.begin();
        printf("Case %lld: %lld\n",++t,x);
    }

    return 0;
}
