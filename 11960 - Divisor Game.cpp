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

ll ar[1000010],br[1000010];

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    ar[0]=0;
    ar[1]=1;
    br[0]=0;
    br[1]=1;
    br[2]=2;
    for(i=2;i<=1000010;i++) ar[i]=2;
    for(i=2;i<=1000010;i++){
        for(j=i+i;j<=1000010;j+=i) ar[j]++;
    }
    for(i=2;i<=1000010;i++){
        if(ar[i]>=ar[br[i-1]]){
            br[i]=i;
            x=i;
        }
        else br[i]=x;
    }
    S(t);
    while(t--){
        S(n);
        printf("%lld\n",br[n]);
    }

    return 0;
}
