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
#define     fast            ios::sync_with_stdio(false); cin.tie(0); cout.tie(NULL);
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{

    ll a,b,c,i,j,t,k,m,mx,n,o,x,y,z;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&m,&n);
        mx=0;
        for(i=m;i<=n;i++)
        {
            c=0;
            for(j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    if(i/j==j)c++;
                    else c+=2;
                }
            }
            if(c>mx)
            {
                mx=c;
                x=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",m,n,x,mx);
    }

    return 0;
}
