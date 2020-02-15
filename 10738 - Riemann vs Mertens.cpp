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
#define		OO              10000000000

ll ar[1000010],mob[1000010],mer[1000010];
vll v;
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
    ll a,b,c=0,i,p,j,t,k,lie,m,n,o,x,y,z,sm=0;
    sieve();
    mob[1]=1;
    mer[1]=1;
    for(i=2;i<=1000010;i++){
        p=0,c=0;
        x=i;
        for(j=0;v[j]*v[j]<=x;j++){
            if(x%v[j]==0){
                c++;
                if((x/v[j])%v[j]==0){
                    p=1;
                    break;
                }
                x/=v[j];
            }
        }
        if(x>1) c++;
        if(p) mob[i]=0;
        else if(c&1) mob[i]--;
        else mob[i]++;
    }
    for(i=2;i<=1000010;i++) mer[i]=mer[i-1]+mob[i];
    while(S(n)&&n){
        printf("%8lld%8lld%8lld\n",n,mob[n],mer[n]);
    }

    return 0;
}
