#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
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

ll fx[]={ 1, -1,  0,  0};   // 4 direction
ll fy[]={ 0,  0,  1, -1};  // 4 direction
ll row,clm,mx,cnt;
char ch[22][22];

void flood_fill(ll i,ll j,char c){
    ll c3=0,c4=0;
    if(i<0) return;
    if(j<0&&c3>0) return;
    if(i>=row) return;
    if(j>=clm&&c4>0) return;
    if(j<0) j=clm-1,c3++;
    if(j>=clm) j=0,c4++;
    if(ch[i][j]==c){
        ch[i][j]='*';
        cnt++;
        for(ll k=0;k<4;k++){
            ll x=i+fx[k];
            ll y=j+fy[k];
            flood_fill(x,y,c);
        }
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    while(SS(row,clm)==2){
        for(i=0;i<row;i++){
            for(j=0;j<clm;j++) scanf(" %c",&ch[i][j]);
        }
        SS(x,y);
        char c=ch[x][y];
        flood_fill(x,y,c);
        mx=0;
        for(i=0;i<row;i++){
            for(j=0;j<clm;j++){
                if(ch[i][j]==c){
                    cnt=0;
                    flood_fill(i,j,c);
                    mx=max(cnt,mx);
//                    printf("%lld\n",mx);
                }
            }
        }
        printf("%lld\n",mx);
    }

    return 0;
}
