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

bool ar[10000000];
vll v;
void sieve(){
    ll i,j,n=10000000;
    v.pb(2LL);
    for(i=3;i<n;i+=2){
        if(ar[i]==0){
            v.pb(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}

int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    ll a,a1,a2,b1,b2,b,c=0,i,f,j,t,k,lie,m,n,o,x,y,z;
    sieve();
    while(S(n)==1){
        if(n<8){
            printf("Impossible.\n");
            continue;
        }
        if(n%2==0){
            x=n/2;
            x/=2;
            x*=2;
            y=n-x;
        }
        else{
            y=5;
            x=n-y;
        }
        for(i=0;;i++){
            a=v[i];
            b=x-v[i];
            bool bb=binary_search(all(v),b);
            if(bb){
                a1=a;
                a2=b;
                break;
            }
        }
        if(y==5){
            b1=2;
            b2=3;
        }
        else{
            for(i=0;;i++){
                a=v[i];
                b=y-v[i];
                bool bb=binary_search(all(v),b);
                if(bb){
                    b1=a;
                    b2=b;
                    break;
                }
            }
        }
        printf("%lld %lld %lld %lld\n",a1,a2,b1,b2);
    }

    return 0;
}
