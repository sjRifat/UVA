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

bool ar[1000010];
vll v,vv;
void sieve(){
    ll i,j,n=1000010;
    v.pb(2LL);
    for(i=3;i<=n;i+=2){
        if(ar[i]==0){
            v.pb(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,i,j,t,k,m,n,o,x,y,z;
    sieve();
    for(i=0;i<zz(v);i++){
        x=v[i]*v[i];
        while(x<=1000000000000){
            vv.pb(x);
            x*=v[i];
        }
    }
    sort(all(vv));
    S(t);
    while(t--){
        SS(a,b);
        auto it=lower_bound(all(vv),a);
        y=it-vv.begin();
        auto itt=upper_bound(all(vv),b);
        z=itt-vv.begin();
        printf("%lld\n",z-y);
    }

    return 0;
}

