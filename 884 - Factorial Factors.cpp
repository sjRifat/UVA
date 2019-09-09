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

bool ar[1000010];
vll v;
map<ll,ll>m;
void sieve(ll n){
    ll i,j;
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
    ll a,b,c,i,j,t,k,lie,n,o,x,y,z;
    sieve(1000000);
    ll s=0;
    for(i=2;i<=1000000;i++){
        x=i;
        c=0;
        for(j=0;v[j]<=x/v[j];j++){
            while(x%v[j]==0){
                c++;
                x/=v[j];
            }
        }
        if(x!=1) c++;
        s+=c;
        m[i]=s;
    }
    while(S(n)==1){
        printf("%lld\n",m[n]);
    }

    return 0;
}

