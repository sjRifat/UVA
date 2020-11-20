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
    ll a,b,c,i,j,k,t,sm=0,m,n,o,x,y,z,ar[555];
    cin>>z;
    while(z--)
    {
        cin>>n;
        t=1000000000000000000;
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        for(i=0; i<n; i++)
        {
            sm=0;
            for(j=0; j<n; j++)
            {
                sm+=abs(ar[i]-ar[j]);
            }
            if(sm<t)
                t=sm;
        }
        cout<<t<<nn;
    }

    return 0;
}
