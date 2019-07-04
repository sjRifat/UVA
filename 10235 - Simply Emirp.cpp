#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	PB 			    pop_back
#define   	nn 			    "\n"
#define     all(p)          p.begin(),p.end()
#define   	ss 			    ' '
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

ll rev(ll a)
{
    ll x,y=0,sm=0;
    while(a!=0)
    {
        x=a%10;
        a/=10;
        y=y*10+x;
    }
    return y;
}

int main()
{
    ll a,b,c,i,j,t,k,l,m,n,o,p,q,x,y,z;
    while(scanf("%lld",&n)==1)
    {
        if(n==2)
            printf("%lld is prime.\n",n);
        else if(n==1)
            printf("%lld is not prime.\n",n);
        else if(n%2==0)
            printf("%lld is not prime.\n",n);
        else
        {
            p=0;
            for(j=3; j<=n/2; j+=2)
            {
                if(n%j==0)
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                printf("%lld is not prime.\n",n);
            else
            {
                x=rev(n);
                if(x==n)
                    printf("%lld is prime.\n",n);
                else
                {
                    q=0;
                    for(l=3; l<=x/2; l+=2)
                    {
                        if(x%l==0)
                        {
                            q=1;
                            break;
                        }
                    }
                    if(q==1)
                        printf("%lld is prime.\n",n);
                    else
                        printf("%lld is emirp.\n",n);
                }
            }
        }
    }

    return 0;
}
