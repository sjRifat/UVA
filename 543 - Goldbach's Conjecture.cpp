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

vector<int> v;
bool ar[1000010];
int main()
{
    int c,i,j,t,k=1,m,n,o,p,x,y,z,mx=1000000;
    x=sqrt(mx);
    ar[0]=ar[1]=1;
    for(i=4; i<=mx; i+=2)
        ar[i]=1;
    for(i=3; i*i<=mx/2; i+=2)
    {
        if(ar[i]==0)
        {
            if(i<500000)
                v.pb(i);
            for(j=i*i; j<=mx; j+=(i+i))
                ar[j]=1;

        }
    }
    while(scanf("%d",&n)&&n)
    {
        for(int a = 3; a < n; ++a)
        {

            if( !ar[a] )
            {

                 int b = n - a;
                if( !ar[b] )
                {
                    printf("%d = %d + %d\n", n, a, b);
                    break;
                }

            }
        }
    }

    return 0;
}
