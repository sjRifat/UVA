#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	nn 			    "\n"
#define   	ss 			    ' '
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c,i,j,k,t,m,n,o,x,y,z;
    while(cin>>t&&t)
    {
        cin>>m>>n;
        for(i=1; i<=t; i++)
        {
            cin>>x>>y;
            if(x==m || y==n)
                cout<<"divisa"<<nn;
            else if (x<m && y<n)
                cout<<"SO"<<nn;
            else if (x>m && y>n)
                cout<<"NE"<<nn;
            else if (x>m && y<n)
                cout<<"SE"<<nn;
            else if (x<m && y>n)
                cout<<"NO"<<nn;
        }
    }

    return 0;
}
