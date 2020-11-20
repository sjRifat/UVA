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
    S(t);
    while(t--){
        ll ar[27],sm=0;
        vll v;
        mms(ar,0);
        SS(n,m);
        SS(x,y);
        string s[22];
        for(i=0;i<n;i++) cin>>s[i];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                ar[s[i][j]-'A']++;
            }
        }
        for(i=0;i<26;i++){
            if(ar[i]>0) v.pb(ar[i]);
        }
        sort(all(v));
        reverse(all(v));
        ll mx=v[0];
//        for(i=0;i<zz(v);i++) cout<<v[i]<<ss;
//        cout<<nn;
        for(i=0;i<zz(v);i++){
            if(v[i]==mx) sm+=(v[i]*x);
            else sm+=(v[i]*y);
        }
        printf("Case %lld: %lld\n",++k,sm);
//        printf("%lld\n",sm);
    }

    return 0;
}
