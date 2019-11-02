#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

ll ar[200010];
vll v;
void totient(){
    ll n=200000,s=0;
    ar[1]=2;
    for(ll i=2;i<=n;i++) ar[i]=i;
    for(ll i=2;i<=n;i++){
        if(ar[i]==i){
            ar[i]=i-1;
            for(ll j=i*2;j<=n;j+=i) ar[j]=(ar[j]/i)*(i-1);
        }
    }
    v.pb(0);
    for(ll i=1;i<=n;i++){
        s+=ar[i];
        v.pb(s);
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    totient();
    while(S(n)&&n){
        c=0;
        auto it=lower_bound(all(v),n);
        x=it-v.begin();
        y=n-v[x-1];
        for(i=0;;i++){
            if(gcd(i,x)==1) c++;
            if(c==y){
                printf("%lld/%lld\n",i,x);
                break;
            }
        }
    }

    return 0;
}
