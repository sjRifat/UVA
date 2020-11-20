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
    ll a,b,c,d,e,f,g,i,j,t,k=0,lie,m,n,o,x,y,z=0;
    S(t);
    while(t--){
        ll sm=0;
        cin>>a>>b>>c>>d>>e>>f>>g;
        sm+=a;
        sm+=b;
        sm+=c;
        sm+=d;
        x=max(e,max(f,g));
        z=min(e,min(f,g));
        y=e+f+g-x-z;
        x=(x+y)/2;
        sm+=x;
        if(sm>=90) printf("Case %lld: A\n",++k);
        else if(sm>=80) printf("Case %lld: B\n",++k);
        else if(sm>=70) printf("Case %lld: C\n",++k);
        else if(sm>=60) printf("Case %lld: D\n",++k);
        else printf("Case %lld: F\n",++k);
    }

    return 0;
}
