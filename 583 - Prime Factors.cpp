#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	nn 			    "\n"
#define   	ss 			    ' '
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c=0,i,j,k,m,n,s=0,o,x,y,z;
    vll v;
    while(scanf("%lld",&n)&&n)
    {
        x=n;
        if(n<0)
        {
            v.pb(-1);
            n*=-1;
        }

        while (n%2 == 0)
        {
            v.pb(2);
            n/=2;
        }
        for (i=3;i<=sqrt(n);i+=2)
        {
            while(n%i==0)
            {
                v.pb(i);
                n=n/i;
            }
        }
        if(n>2)
        v.pb(n);
        if(x<0 && v.size()==1)
            v.pb(x);
        if(x>0 && v.size()==0)
            v.pb(x);
        printf("%lld = ",x);
        for(i=0; i<v.size()-1; i++)
            printf("%lld x ",v[i]);
        printf("%lld\n",v[v.size()-1]);
        v.clear();
    }

    return 0;
}
