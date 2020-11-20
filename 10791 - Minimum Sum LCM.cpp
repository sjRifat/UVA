#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool ar[50000];
vector<ll>v;
void sieve(){
    ll i,j,n=50000;
    v.push_back(2LL);
    for(i=3;i<=n;i+=2){
        if(ar[i]==0){
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,m,n,o,x,y,z;
    sieve();
    while(scanf("%lld",&n)&&n){
        x=n;
        ll ct=0,po=0,sm=0;
        for(i=0;v[i]*v[i]<=x;i++){
            po=0;
            if(x%v[i]==0){
                while(x%v[i]==0){
                    x/=v[i];
                    po++;
                }
                sm+=(pow(v[i],po));
                ct++;
            }
        }
        if(x!=1){
            ct++;
            sm+=x;
        }
        if(ct<2LL) printf("Case %lld: %lld\n",++c,n+1);
        else printf("Case %lld: %lld\n",++c,sm);
    }

    return 0;
}
