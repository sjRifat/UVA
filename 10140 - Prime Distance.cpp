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

vll v;
bool ar[1000010];

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

void segmented_sieve(ll L, ll R)
{
    vll vv;
    ll l1,l2,h1,h2;
    bool isPrime[R-L+1];
    for(ll i=0;i<=R-L+1;i++) isPrime[i]=true;
    if(L==1) isPrime[0]=false;
    for(ll i=0;v[i]*v[i]<=R;i++){
        ll curPrime=v[i];
        ll base=curPrime*curPrime;
        if(base<L) base=((L+curPrime-1)/curPrime)*curPrime;
        for(ll j=base;j<=R;j+=curPrime) isPrime[j-L]=false;
    }
    for(ll i=0 ; i<=R-L ; i++){
        if(isPrime[i]==true) vv.pb(L+i);
    }
    if(zz(vv)<2) printf("There are no adjacent primes.\n");
    else{
        ll mn=1000000,mx=0;
        for(ll i=0;i<zz(vv)-1;i++){
            if(vv[i+1]-vv[i]<mn){
                mn=vv[i+1]-vv[i];
                l1=vv[i];
                l2=vv[i+1];
            }
            if(vv[i+1]-vv[i]>mx){
                mx=vv[i+1]-vv[i];
                h1=vv[i];
                h2=vv[i+1];
            }
        }
        printf("%lld,%lld are closest, %lld,%lld are most distant.\n",l1,l2,h1,h2);
    }
}

int main()
{
    sieve();
    ll l,r,t;
    while(SS(l,r)==2){
        segmented_sieve(l,r);
    }


    return 0;
}
