#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		sp              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

bool ar[10000001];
vll v;
void sieve(){
    ll i,j,n=10000001;
    v.pb(2LL);
    for(i=3;i<n;i+=2){
        if(ar[i]==0){
            v.pb(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}
int main(){
//    freopen("input.txt","r",stdin);
    sieve();
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z;
    while(S(n)&&n){
        n=labs(n);
        vll vv;
        for(i=0;v[i]<=n/v[i];i++){
            if(n%v[i]==0){
                vv.pb(v[i]);
                while(n%v[i]==0){
                    n/=v[i];
                }
            }

        }
        if(n!=1) vv.pb(n);
        if(zz(vv)<2) printf("-1\n");
        else printf("%lld\n",vv[zz(vv)-1]);
    }

    return 0;
}
