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

ll totient(ll n){
    ll s=n;
    for(ll i=2;i<=n/i;i++){
        if(n%i==0){
            while(n%i==0) n/=i;
            s-=s/i;
        }
    }
    if(n>1) s-=s/n;
    return s;
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    while(S(n)&&n){
        x=totient(n);
        if(x==n) x--;
        printf("%lld\n",x);
    }

    return 0;
}
