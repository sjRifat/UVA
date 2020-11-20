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

vll Zcal(string s){
    ll n=zz(s);
    vll z(n);
    for(ll i=1,l=0,r=0;i<n;i++){
        if(i<=r) z[i]=min(r-i+1,z[i-l]);
        while(i+z[i]<n && s[z[i]]==s[i+z[i]]) z[i]++;
        if(i+z[i]-1>r) l=i,r=i+z[i]-1;
    }
    return z;
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,y,z,ar[200010];
    S(t);
    while(t--){
        if(c>0) printf("\n");
        c++;
        ll cnt=0,x=0,mx=0,id,p=0;
        string s;
        cin>>s;
        vll Z;
        Z=Zcal(s);
        for(i=0;i<zz(Z);i++){
            if(Z[i]>mx){
                mx=Z[i];
                id=i;
            }
        }
        if(zz(s)%id!=0) printf("%lld\n",zz(s));
        else{
            for(i=id;i<zz(s);i++){
                if(s[i]!=s[i-id]){
                    p=1;
                    break;
                }
            }
            if(p==1) printf("%lld\n",zz(s));
            else printf("%lld\n",id);
        }
    }

    return 0;
}
