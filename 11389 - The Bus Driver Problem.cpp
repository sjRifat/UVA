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

    ll a=1,b=1,c,i,l,d,r,j,t,k,m,mx,n,o,x,y,z,a1[111],a2[111];
    while(scanf("%lld%lld%lld",&n,&d,&r)&&(n||d||r))
    {
        ll s1=0,s2=0;
        for(i=0; i<n; i++)
            scanf("%lld",&a1[i]);
        for(i=0; i<n; i++)
            scanf("%lld",&a2[i]);
        sort(a1,a1+n);
        sort(a2,a2+n);
        reverse(a2,a2+n);
        for(i=0; i<n; i++)
        {
            if(a1[i]+a2[i]>d)
                s1+=(a1[i]+a2[i]-d);
        }
        printf("%lld\n",s1*r);
    }

    return 0;
}
