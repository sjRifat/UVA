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
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z=0;
    while(S(n)&&n){
        string s,st,sa;
        cin>>s;
        x=zz(s)/n;
        for(i=0;i<zz(s)-x+1;i+=x){
            st.assign(s,i,x);
            reverse(all(st));
            sa+=st;
        }
        cout<<sa<<nn;
    }

    return 0;
}
