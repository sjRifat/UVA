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
    ll c=0,i,j,t,m,n,o,x,y,z;
    scanf("%lld",&t);
    while(t--)
    {
        ll ar[11]= {0};
        scanf("%lld",&n);
        for(i=1; i<=n; i++)
        {
            y=i;
            while(y!=0)
            {
                x=y%10;
                y/=10;
                ar[x]++;
            }
        }
        ll k=0;
        for(i=0; i<10; i++)
        {
            if(!k)
                printf("%lld",ar[i]);
            else
                printf(" %lld",ar[i]);
            k++;
        }
        printf(nn);
    }

    return 0;
}
