#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		ss              ' '
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define		sz(v)           v.size()
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    int a,b,i,j,t,k,m,o,z;
    cin>>t;
    while(t--)
    {
        double x,y,n,s=0,c=0;
        int ar[1010];
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
            s+=(double)ar[i];
        }
        x=s/(double)n;
        for(i=0; i<n; i++)
        {
            if((double)ar[i]>x)
                c++;
        }
        y=(c/n)*100;
        printf("%.3f%\n",y);
    }

    return 0;
}
