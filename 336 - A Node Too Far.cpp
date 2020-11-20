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

vll v[11111];
ll visited[11111];
ll level[11111];

ll bfs(ll u,ll a){
    ll c=0;
    visited[u]=1;
    level[u]=0;
    queue<ll>q;
    q.push(u);

    while(!q.empty()){
        u=q.front();
        visited[u]=1;
        q.pop();
        visited[u]=1;
        for(ll i=0;i<zz(v[u]);i++){
            ll p=v[u][i];
            if(!visited[p]){
                visited[p]=1;
                level[p]=level[u]+1;
                if(level[p]<=a) c++;
                q.push(p);
            }
        }
    }
    return c;
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,tt=0,mx,k,node,edge;
    while(S(edge)&&edge){
        for(i=0;i<11111;i++) v[i].clear();
        mx=0;
        for(i=1;i<=edge;i++){
            SS(a,b);
            v[a].pb(b);
            v[b].pb(a);
            mx=max(mx,max(a,b));
        }
        ll start,ttl;
        c=0;
        for(i=0;i<mx;i++){
            if(zz(v[i])>0) c++;
        }
        while(SS(start,ttl)){
            if(start==0 && ttl==0) break;
            memset(visited,0,sizeof(visited));
            memset(level,0,sizeof(level));
            ll x=bfs(start,ttl);
            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",++tt,c-x,start,ttl);
        }
    }

    return 0;
}
