#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define	    gcd(a,b)        __gcd(a,b)
#define	    lcm(a,b)        (a*b)/gcd(a,b)

int main(){
    ll a,b,i,j,m,n,x,y;
    while(scanf("%lld",&n)&&n){
        if(n==1){
            printf("1 1\n");
            continue;
        }
        vector<ll>v;
        ll cnt=2;
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i) v.push_back(i);
                else{
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }
        cnt+=(ll)v.size();
        for(i=0;i<(ll)v.size();i++){
            for(j=i+1;j<(ll)v.size();j++){
                if(lcm(v[i],v[j])==n) cnt++;
            }
        }
        printf("%lld %lld\n",n,cnt);
    }

    return 0;
}
