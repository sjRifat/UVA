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

int main()
{
    ll a,b,c,i,j,t,k=1,m,n,o,p,y,z;
    while(scanf("%lld",&a)&&a)
    {
        ll x,sm;
        while(a>9)
        {
            sm=a;
            a=0;
            while(sm!=0)
            {
                x=sm%10;
                sm/=10;
                a+=x;
            }
        }
        printf("%lld\n",a);
    }

    return 0;
}
