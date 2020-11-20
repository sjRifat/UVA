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
typedef		long long       ll;
typedef		vector<ll>      vll;

int mod(int b,int p,int m)
{
    int y;
    if(p==0) return 1;
    else if(p%2==0)
    {
        y=mod(b,p/2,m)%m;
        return(y*y)%m;
    }
    else return ((b%m)*mod(b,p-1,m)%m)%m;
}

int main()
{
    int a,b,c,p,i,j,t,k,m,n,o,x,y,z;
    while(cin>>b>>p>>m)
    {
        x=mod(b,p,m);
        cout<<x<<nn;
    }

    return 0;
}
