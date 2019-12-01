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

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    while(SS(n,x)==2){
        ll high=0,low=0,ans=100000010,ar[100010];
        for(i=0;i<n;i++) S(ar[i]);
        ll sm=ar[0];
        while(true){
            if(sm<x){
                high++;
                if(high==n) break;
                sm+=ar[high];
                if(sm>=x) ans=min(ans,high-low+1);
            }
            if(sm>=x){
                sm-=ar[low];
                low++;
                if(sm>=x) ans=min(ans,high-low+1);
            }
        }
        if(ans==100000010) ans=0;
        if(n==1 && ar[0]>=x) ans=1;
        printf("%lld\n",ans);
    }

    return 0;
}
