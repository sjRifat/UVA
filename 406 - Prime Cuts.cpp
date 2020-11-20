#include<bits/stdc++.h>
using namespace std;
#define     pb              push_back
#define     PB              pop_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     sp              ' '
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
#define     mod             1000003
typedef     long long       ll;
typedef     vector<ll>      vll;

bool ar[1000010];
vll v;
void sieve(ll n){
    ll i,j;
    v.pb(1LL);
    if(n>1)v.pb(2LL);
    for(i=3;i<=n;i+=2){
        if(ar[i]==0){
            v.pb(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    ll a,b,ct=0,c,i,m,j,t,k,mx,mn,r,l,lie,n,o,x,y,z,ar[200010];

    while(SS(a,b)==2){
        v.clear();
        vll vv;
        sieve(a);
        if(zz(v)%2==0){
            if(b*2>=zz(v)) x=0,y=zz(v);
            else x=zz(v)/2-b,y=zz(v)/2+b;
        }
        else{
            if(b*2>=zz(v)) x=0,y=zz(v);
            else x=zz(v)/2-b+1,y=zz(v)/2+b;
        }
        printf("%lld %lld:",a,b);
        for(i=x;i<y;i++) printf(" %lld",v[i]);
        printf(nn);
        printf(nn);
    }

    return 0;
}
