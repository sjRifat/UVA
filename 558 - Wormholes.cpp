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

vll G[1010];
ll cost[1010][1010],flag,n,m,dis[1010];
void Bellman_Ford(ll s){
    ll i,j,k,u,uc,v,uvc;
    dis[s]=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n;j++){
            for(k=0;k<zz(G[j]);k++){
                u=j;
                uc=dis[u];
                v=G[u][k];
                uvc=cost[u][v];
                if(uc+uvc<dis[v]) dis[v] = uc+uvc;
            }
        }
    }
    flag=0;
    for(j=0;j<n;j++){
        for(k=0;k<zz(G[j]);k++){
            u=j;
            uc=dis[u];
            v=G[u][k];
            uvc=cost[u][v];
            if(uc+uvc<dis[v]){
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,i,j,c,x,y,t;
    S(t);
    while(t--){
        SS(n,m);
        for(ll i=0;i<1010;i++){
            dis[i]=99999999;
            G[i].clear();
            for(ll j=0;j<1010;j++) cost[i][j]=0;
        }
        for(i=1;i<=m;i++){
            SSS(a,b,c);
            G[a].pb(b);
            cost[a][b]=c;
        }
        Bellman_Ford(0);
        if(flag==1) printf("possible\n");
        else printf("not possible\n");
    }

    return 0;
}
