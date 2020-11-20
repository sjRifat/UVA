#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

vll v[222];
ll color[222];

bool bfs(ll u){
    memset(color,-1,sizeof(color));
    queue<ll>q;
    q.push(u);
    color[u]=1;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(ll i=0;i<zz(v[u]);i++){
            ll p=v[u][i];
            if(color[p]==-1){
                color[p]=1-color[u];
                q.push(p);
            }
            if(color[u]==color[p]) return false;
        }
    }
    return true;
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,tt=0,mx,k,node,edge;
    while(S(node)&&node){
        for(i=0;i<222;i++) v[i].clear();
        S(edge);
        for(i=1;i<=edge;i++){
            SS(a,b);
            v[a].pb(b);
            v[b].pb(a);
        }
        bool bb=bfs(0);
        if(bb) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");

    }

    return 0;
}
