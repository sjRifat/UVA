#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	nn 			    "\n"
#define   	ss 			    ' '
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c=0,i,j,k,t,m,n,o,x,y,z,ar[10010];
    while(cin>>m>>n)
    {
        c+=m;
        x=m/n;
        c+=x;
        y=m%n;
        z=x+y;
        while(z>=n)
        {
            x=z/n;
            c+=x;
            y=z%n;
            z=x+y;
        }
        cout<<c<<nn;
        c=0;
    }

    return 0;
}
