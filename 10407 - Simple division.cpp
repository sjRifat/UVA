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

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    while(S(n)&&n){
        ll ar[1010],ind=1;
        ar[0]=n;
        while(S(n)&&n){
            ar[ind]=n;
            ind++;
        }
        sort(ar,ar+ind);
        x=0;
        for(i=1;i<ind;i++) x=gcd(x,ar[i]-ar[i-1]);
        printf("%lld\n",x);
    }

    return 0;
}
