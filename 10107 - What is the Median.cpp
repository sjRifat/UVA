#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define		OO              10000000000

int main()
{
    ll a,b,i,j,n,t,k,lie;
    vll v;
    while(S(n)==1){
        v.pb(n);
        sort(all(v));
        if(zz(v)&1) printf("%lld\n",v[zz(v)/2]);
        else{
            ll x=(v[zz(v)/2]+v[zz(v)/2-1])/2;
            printf("%lld\n",x);
        }
    }

    return 0;
}
