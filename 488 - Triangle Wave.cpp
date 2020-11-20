#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    ll a,b,c=1,i,j,t,k,m,n,o,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        while(b--)
        {
            for(i=1; i<=a; i++)
            {
                for(j=1; j<=i; j++)
                {
                    cout<<c;
                }
                c++;
                cout<<nn;
            }
            c=a;
            for(i=a-1; i>=1; i--)
            {
                c--;
                for(j=1; j<=i; j++)
                {
                    cout<<c;
                }
                cout<<nn;
            }
             if(b||t) cout<<nn;
        }
    }

    return 0;
}
