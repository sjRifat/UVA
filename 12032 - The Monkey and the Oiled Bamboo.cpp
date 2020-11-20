#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		sp              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    S(t);
    while(t--){
        ll ar[200010],p=0,pp=0,mx,mxx,ct;
        vll v;
        S(n);
        for(i=0;i<n;i++) S(ar[i]);
        if(n==1){
            printf("Case %lld: %lld\n",++c,ar[0]);
            continue;
        }
        v.pb(ar[0]);
        mx=ar[0];
        for(i=0;i<n-1;i++){
            v.pb(ar[i+1]-ar[i]);
            mx=max(mx,v[i]);
        }
        mx=max(mx,v[n-1]);
        mxx=mx;
        for(i=0;i<n;i++){
            if(mx==v[i]){
                x=i;
                break;
            }
        }
        ct=count(v.begin()+i,v.end(),mx);
        if(ct>1){
            printf("Case %lld: %lld\n",++c,mxx+1);
            continue;
        }
        mx--;
        while(true){
            ct=count(v.begin()+x,v.end(),mx);
            if(ct>1){
                printf("Case %lld: %lld\n",++c,mxx+1);
                break;
            }
            else if(ct==0){
                printf("Case %lld: %lld\n",++c,mxx);
                break;
            }
            for(i=x;i<n;i++){
                if(mx==v[i]){
                    x=i;
                    break;
                }
            }
            mx--;
            if(x==n-1){
                pp=1;
                break;
            }
        }
        if(pp==1) printf("Case %lld: %lld\n",++c,mxx);
    }

    return 0;
}
