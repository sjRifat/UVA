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
    scanf("%lld",&t);
    while(t--)
    {
        ll ar[55];
        scanf("%lld",&n);
        for(i=0; i<n; i++)
            scanf("%lld",&ar[i]);
        c=0;
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(ar[j]>ar[j+1])
                {
                    swap(ar[j],ar[j+1]);
                    c++;
                }
            }
        }
        printf("Optimal train swapping takes %lld swaps.\n",c);

    }

    return 0;
}
