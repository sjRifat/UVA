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
    ll b,a,d,e,f,i,j,t,k=0,g,lie,m,n,o,x,y,z=0;
    while(SS(n,g)==2){
        ll sm=0,c=0;
        vll v;
        while(n--){
            SS(a,b);
            if(a>b) sm+=3;
            else{
                v.pb(b-a);
            }
        }
        sort(all(v));
        for(i=0;i<zz(v);i++){
            if(g>v[i]){
                sm+=3;
                g-=(v[i]+1);
            }
            else if(g==v[i]){
                sm++;
                g-=v[i];
            }
            else break;
        }
        printf("%lld\n",sm);
    }

    return 0;
}
