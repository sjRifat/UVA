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
         res=(res*10+(ll)num[i]-'0')%a;
    return res;
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z,ar[200010],pp=0;
    string s,s1;
    while(cin>>s){
        if(pp!=0) printf(nn);
        pp=1;
        ll m4,m100,m400,m15,m55;
        m4=mod(s,4);
        m100=mod(s,100);
        m400=mod(s,400);
        m15=mod(s,15);
        m55=mod(s,55);
        ll leap=0,p=0;
        if((m4%4==0&&m100%100!=0) || m400%400==0){
            printf("This is leap year.\n");
            leap=1;
            p=1;
        }
        if(m15%15==0){
            printf("This is huluculu festival year.\n");
            p=1;
        }
        if(leap==1 && m55%55==0) printf("This is bulukulu festival year.\n");
        if(p==0) printf("This is an ordinary year.\n");
    }

    return 0;
}
