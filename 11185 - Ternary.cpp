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
    ll a,b,i,j,t,k,m,o,z,s,n,x,y;
    while(scanf("%lld",&n)&&n>=0)
    {
        vll v;
        while(n!=0)
        {
            x=n%3;
            n/=3;
            v.pb(x);
        }
        reverse(all(v));
        s=0;
        for(i=0; i<sz(v); i++)
            s=s*10+v[i];
        cout<<s<<nn;
    }

    return 0;
}
