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

bool ar[100010];
vll v;
void sieve(){
    ll i,j,n=100010;
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
    ll a,b=0,c=0,i,j,n,m,t,lie,o,x,y;
    sieve();
    while(SS(n,m)==2){
        ll mm=m;
        ll p=0;
        for(i=0;v[i]*v[i]<=m;i++){
            if(m%v[i]==0){
                ll cnt=0;
                while(m%v[i]==0){
                    m/=v[i];
                    cnt++;
                }
                x=n;
                ll sm=0;
                while(x){
                    x/=v[i];
                    sm+=x;
                }
                if(sm<cnt){
                    p=1;
                    break;
                }
            }
        }
        if(m!=1){
            ll sm=0;
            x=n;
            while(x){
                x/=m;
                sm+=x;
            }
            if(sm<1) p=1;
        }
        if(p==1) printf("%lld does not divide %lld!\n",mm,n);
        else printf("%lld divides %lld!\n",mm,n);
    }

    return 0;
}
