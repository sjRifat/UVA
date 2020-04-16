#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define	    gcd(a,b)        __gcd(a,b)
#define	    lcm(a,b)        (a*b)/gcd(a,b)

int main(){
    ll a,b,c=0,i,j,m,n,x,y,t;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        ll ar[n],ml=1,ct=0;
        for(i=0;i<n;i++){
            scanf("%lld",&ar[i]);
            ml=lcm(ml,ar[i]);
        }
        for(i=0;i<n;i++){
            ct+=(ml/ar[i]);
        }
        ml*=n;
        ll gc=gcd(ml,ct);
        ml/=gc;
        ct/=gc;
        printf("Case %lld: %lld/%lld\n",++c,ml,ct);
    }

    return 0;
}
