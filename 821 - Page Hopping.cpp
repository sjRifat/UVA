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
#define		inf             99999999

ll ar[111][111];
vll Floyd_Warshall(ll n){
    ll i,j,k,sm=0,c=0;
    vll v;
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                ar[i][j]=min(ar[i][j],ar[i][k]+ar[k][j]);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j && ar[i][j]!=inf){
                sm+=ar[i][j];
                c++;
            }
        }
    }
    v.pb(sm);
    v.pb(c);
    return v;
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,k,x,y,t;
    while(SS(a,b)&&a||b){
        vll v;
        for(i=0;i<100;i++){
            for(j=0;j<100;j++){
                if(i==j) ar[i][j]=0;
                else ar[i][j]=inf;
            }
        }
        ll mx=0;
        while(a||b){
            mx=max(max(mx,a),b);
            ar[a-1][b-1]=1;
            SS(a,b);
        }
        v=Floyd_Warshall(mx);
        printf("Case %lld: average length between pages = %.3f clicks\n",++c,v[0]/(v[1]*1.0));
    }

    return 0;
}
