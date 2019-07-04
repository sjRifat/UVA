#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	nn 			    "\n"
#define   	ss 			    ' '
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c=1,i,j,k,t,m,n,o,x,y,z,ar[55];
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a>k) k=a;
        }
        cout<<"Case "<<c<<": "<<k<<nn;
        c++;
    }

    return 0;
}
