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

ll mod(string num,ll a)
{
    ll res=0;
    for(ll i=0;i<zz(num);i++)
         res=(res*10+(ll)num[i]-'0')%a;
    return res;
}

int main(){
//    freopen("in.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    string s;
    while(cin>>s && s!="0"){
        z=mod(s,11);
        cout<<s;
        if(z==0) printf(" is a multiple of 11.\n");
        else printf(" is not a multiple of 11.\n");
    }

    return 0;
}
