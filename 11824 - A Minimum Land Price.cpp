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

int main()
{
    ll a,b,i,n,j,t,k,lie;
    S(t);
    vll v;
    while(t--){
        while(true){
            S(n);
            if(n==0){
                ll sm=0;
                sort(all(v));
                reverse(all(v));
                for(i=0;i<zz(v);i++){
                    sm+=(pow(v[i],i+1));
                }
                sm*=2;
                if(sm>5000000){
                    printf("Too expensive\n");
                }
                else printf("%lld\n",sm);
                v.clear();
                break;
            }
            else v.pb(n);
        }
    }

    return 0;
}
