#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		ss              ' '
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{

    ll a=1,b=1,c,i,j,t,k,m,mx,n,o,x,y,z;
    vll v;
    for(i=1; a<=4294967296; i++)
    {
        v.pb(a);
        c=a+b;
        a=b;
        b=c;
    }
    while(scanf("%lld",&n)&&n!=-1)
    {
        ll sum=0;
        ll s=0;
        for(i=0; i<n+1; i++)
            sum+=v[i];
        for(i=0; i<n; i++)
            s+=v[i];
        printf("%lld %lld\n",s,sum);
    }

    return 0;
}
