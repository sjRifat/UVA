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
    ll a,b,c,i,j,t,k,r,m,n,o,x,y,z;
    while((cin>>n>>r)&&n||r)
    {
        c=1;
        r=min(r,n-r);
        for(i=1;i<=r;i++){
            c*=(n-r+i);
            c/=i;
        }
        cout<<c<<nn;
    }

    return 0;
}
