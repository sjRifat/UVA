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

ll fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knight's Move
ll fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knight's Move
ll visited[10][10];
ll level[10][10],R,C;

void bfs(ll x,ll y){
    mms(visited,0);
    mms(level,0);
    visited[x][y]=1;
    level[x][y]=0;
    queue<ll>q;
    q.push(x);
    q.push(y);

    while(!q.empty()){
        ll x1=q.front();
        q.pop();
        ll y1=q.front();
        q.pop();
        for(ll i=0;i<8;i++){
            ll x2=x1+fx[i];
            ll y2=y1+fy[i];

            if((x2>0&&x2<=8) && (y2>0&&y2<=8)){
                if(!visited[x2][y2]){
                    visited[x2][y2]=1;
                    q.push(x2);
                    q.push(y2);
                    level[x2][y2]=level[x1][y1]+1;
                }
            }
        }
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,n,s,t,k,ro,num,r,x1,y1,x2,y2;
    map<char,ll>mp;
    for(i=97;i<107;i++) mp[i]=i-'0'-'0';
    char c1,c2;
    while(scanf(" %c%lld %c%lld",&c1,&y1,&c2,&y2)==4){
        x1=mp[c1];
        x2=mp[c2];
        bfs(x1,y1);
        printf("To get from %c%lld to %c%lld takes %lld knight moves.\n",c1,y1,c2,y2,level[x2][y2]);
    }

    return 0;
}
