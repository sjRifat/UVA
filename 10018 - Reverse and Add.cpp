#include <bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	FOR(i,a,b) 		for(i=a;i<=b;i++)
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

ll rev(ll a)
{
    ll m,n,s=0;
    while(a!=0)
    {
        m=a%10;
        a/=10;
        s=(s*10+m);
    }
    return s;
}

int main()
{
    ll a,b,i,j,k,m,n,p=0,s=0,c=0,o,x,y,z;
    cin>>n;
    while(n--)
    {
        cin>>a;
        while(c<1)
        {
            b=rev(a);
            a+=b;
            s++;
            if(a==rev(a))
            {
                cout<<s<<' '<<a<<endl;
                c++;
            }
        }
        s=0;
        c=0;
    }

    return 0;
}
