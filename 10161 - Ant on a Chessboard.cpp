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

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    while(S(n)&&n){
        x=sqrt(n);
        if(x*x!=n) x++;
        if(x%2==0){
            y=x-1;
            if(n==y*y+y+1) printf("%lld %lld\n",x,x);
            else if(n<y*y+y+1) printf("%lld %lld\n",n-y*y,x);
            else{
                z=n-(y*y+y+1);
                z=x-z;
                printf("%lld %lld\n",x,z);
            }
        }
        else{
            y=x-1;
            if(n==y*y+y+1) printf("%lld %lld\n",x,x);
            else if(n<y*y+y+1) printf("%lld %lld\n",x,n-y*y);
            else{
                z=n-(y*y+y+1);
                z=x-z;
                printf("%lld %lld\n",z,x);
            }
        }
    }

    return 0;
}
