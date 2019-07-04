#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

vll v;
bool ar[1000010];
int main()
{
    ll a,b,c,i,j,t,k=1,m,n,o,p,x,y,z,mx=1000010;
    x=sqrt(mx);
    ar[0]=ar[1]=1;
    for(i=4; i<=mx; i+=2)
        ar[i]=1;
    for(i=3; i<=x; i+=2)
    {
        if(ar[i]==0)
        {
            for(j=i+i; j<=mx; j+=i)
                ar[j]=1;
        }
    }
    for(i=0; i<=mx; i++)
    {
        if(ar[i]==0)
            v.pb(i);
    }
    while(scanf("%lld",&n)&&n)
    {
        j=0;
        c=0;
        while(j<zz(v))
        {
            a=v[j];
            b=n-a;
            bool ans=binary_search(all(v),b);
            if(ans)
                c++;
            j++;
        }
        bool ans=binary_search(all(v),n/2);
        if(ans)
            c++;
        printf("%lld\n",c/2);
    }

    return 0;
}
