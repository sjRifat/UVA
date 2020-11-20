#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		se              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

vll v[1000010];
bool visited[1000010];
stack<ll>ts;
ll cycle[1000010],ans,node;

void dfs(ll u){
    visited[u]=true;
    for(ll i=0;i<zz(v[u]);i++){
        if(cycle[v[u][i]]==1 && ans==1){
            ans=0;
            node=v[u][i];
            return;
        }
        if(!visited[v[u][i]]){
            cycle[v[u][i]]==1;
            dfs(v[u][i]);
            if(ans==1) cycle[v[u][i]]=0;
        }
    }
    ts.push(u);
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,vrtx,edg,k,lie,m,n,o,x,y,z,ar[200010];
    while(SS(edg,vrtx) && vrtx||edg){
        while(vrtx--){
            SS(a,b);
            v[a].pb(b);
        }
        memset(visited,0,sizeof(visited));
        for(i=1;i<=edg;i++){
            ans=1;
            node=1;
            cycle[i]=1;
            if(!visited[i]) dfs(i);
            if(ans==0) break;
            cycle[i]=0;
        }
        if(ans==0){
            printf("IMPOSSIBLE\n");
            while(!ts.empty()){
                ts.pop();
            }
        }
        else{
            while(!ts.empty()){
                printf("%lld\n",ts.top());
                ts.pop();
            }
        }
        for(i=0;i<1000010;i++) v[i].clear();
    }

    return 0;
}
