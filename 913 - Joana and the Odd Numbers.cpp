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

    ll a,b,c,i,j,t,k,m,mx,n,o,x,y,z;
    while(scanf("%lld",&n)==1)
    {
        ll sum=0;
        for(i=1;i<=n;i+=2)
            sum+=i;
        printf("%lld\n",sum*6-9);
    }

    return 0;
}
