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
    ll a,b,c,i,j,t,k,lie,m,n,o,r,x,y,z,ar[200010],pp=0;
    while(SS(n,r)==2){
        if(r==0){
            printf("1\n");
            continue;
        }
        ll ans=1;
        for(i=n;i>=n-r+1;i--) {
            ans*=i;
            while(ans%10==0) ans/=10;
            ans%=10000000000;
        }
        printf("%lld\n",ans%10);
    }

    return 0;
}
