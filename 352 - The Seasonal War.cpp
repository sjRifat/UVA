#include<bits/stdc++.h>
using namespace std;
#define     pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

ll fx[]={ 0,  0,  1, -1, -1,  1, -1,  1};  // King's Move / 8 direction
ll fy[]={-1,  1,  0,  0,  1,  1, -1, -1}; // King's Move / 8 direction
ll n,cnt;
char ch[27][27];

void flood_fill(ll i,ll j){
    if(i<0 || j<0 || i>n-1 || j>n-1) return;
    if(ch[i][j]=='1'){
        ch[i][j]='*';
        for(ll k=0;k<8;k++){
            ll x=i+fx[k];
            ll y=j+fy[k];
            flood_fill(x,y);
        }
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll i,j,b,c=0,t,a,p,x;
    while(S(n)==1){
        cnt=0;
        getchar();
        for(i=0;i<n;i++){
            for(j=0;j<n;j++) scanf(" %c",&ch[i][j]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(ch[i][j]=='1'){
                    cnt++;
                    flood_fill(i,j);
                }
            }
        }
        printf("Image number %lld contains %lld war eagles.\n",++c,cnt);
    }

    return 0;
}
