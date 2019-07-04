#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    int n,c=0;
    string s;
    while(cin>>s)
    {
        ll a,b,x,y,i,j;
        printf("Case %d:\n",++c);
        scanf("%lld",&a);
        while(a--)
        {
            scanf("%d%d",&x,&y);
            int mn=min(x,y);
            int mx=max(x,y);
            int sum=0,p=0;
            for(i=mn; i<mx; i++)
            {
                if(s[i]==s[i+1])
                    continue;
                else
                {
                    p=1;
                    break;
                }
            }
            if(p==0) printf("Yes\n");
            else printf("No\n");
        }
    }

    return 0;
}
