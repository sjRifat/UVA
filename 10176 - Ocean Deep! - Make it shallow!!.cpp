#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

ll mod(string num,ll a)
{
    ll res=0;
    for(ll i=0;i<zz(num);i++)
         res=(res*2+(ll)num[i]-'0')%a;
    return res;
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    string s,s1="";
    while(cin>>s){
        if(s[zz(s)-1]=='#'){
            s1+=s;
            s1.PB();
            z=mod(s1,131071);
            if(z==0) printf("YES\n");
            else printf("NO\n");
            s1.clear();
        }
        else s1+=s;
    }

    return 0;
}
