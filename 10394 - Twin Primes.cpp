#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	sf1(a)          scanf("%lld",&a)
#define 	sf2(a,b)        scanf("%lld %lld",&a,&b)
#define 	sf3(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;
const ll w=20000010;
bool ar[w];
int main()
{
    ll a,b,c=0,i,j,t,k,m,n,o,x,y,z;
    vll v,vv;
    x=sqrt(w);
    ar[0]=ar[1]=1;
    for(i=4; i<=w; i+=2)
        ar[i]=1;
    for(i=3; i<=x; i+=2)
    {
        if(ar[i]==0)
        {
            for(j=i+i; j<=w; j+=i)
                ar[j]=1;
        }
    }
    for(i=0; i<=w; i++)
    {
        if(ar[i]==0 && ar[i+2]==0)
            v.pb(i);
    }
    while(sf1(n)==1){
        printf("(%lld, %lld)\n",v[n-1],v[n-1]+2);
    }

    return 0;

}
