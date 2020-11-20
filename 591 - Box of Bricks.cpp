#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	PB 			    pop_back
#define     all(p)          p.begin(),p.end()
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c,i,j,t,k=1,m,n,o,p,y,z;
    while(scanf("%lld",&n)&&n)
    {
        ll s=0,ss=0,x;
        ll ar[n+1];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ar[i]);
            s+=ar[i];
        }
        x=s/n;
        for(i=0;i<n;i++)
        {
            if(ar[i]>x)
                ss+=(ar[i]-x);
        }
        printf("Set #%lld\n",k);
        k++;
        printf("The minimum number of moves is %lld.\n\n",ss);
    }

    return 0;
}
