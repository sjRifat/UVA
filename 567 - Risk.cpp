#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

vll v[22];

void BFS(ll u,ll uu){
    ll x=u;
    ll visited[22]={0};
    ll level[22]={0};
    visited[u]=1;
    level[u]=0;
    queue<ll>q;
    q.push(u);

    while(!q.empty()){
        u=q.front();
        visited[u]=1;
        q.pop();

        for(ll i=0;i<zz(v[u]);i++){
            ll p=v[u][i];
            if(!visited[p]){
                visited[p]=1;
                level[p]=level[u]+1;
                q.push(p);
            }
        }
    }
    printf("%2lld to %2lld: %lld\n",x,uu,level[uu]);
}

int main(){
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    while(S(n)==1){
        for(i=0;i<n;i++){
            S(a);
            v[1LL].pb(a);
            v[a].pb(1LL);
        }
        for(i=2;i<=19;i++){
            S(n);
            for(j=0;j<n;j++){
                S(a);
                v[i].pb(a);
                v[a].pb(i);
            }
        }
        printf("Test Set #%lld\n",++c);
        S(m);
        while(m--){
            SS(x,y);
            BFS(x,y);
        }
        printf("\n");
        for(i=1;i<=20;i++) v[i].clear();
    }

    return 0;
}
