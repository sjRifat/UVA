#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	nn 			    "\n"
#define   	ss 			    ' '
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c=1,i,j,k,t,m,n,o,x,y,z,ar[10010];
    vll v;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>ar[i];
        }
        cin>>m;
        z=m+1;
        for(i=0; i<t-1; i++)
        {
            for(j=i+1; j<t; j++)
            {
                if(ar[i]+ar[j]==m)
                {
                    x=abs(ar[i]-ar[j]);
                    if(x<z)
                    {
                        a=min(ar[i],ar[j]);
                        b=max(ar[i],ar[j]);
                        z=x;
                    }
                    break;
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<nn<<nn;
    }

    return 0;
}
