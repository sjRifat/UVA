#include<bits/stdc++.h>
using namespace std;
#define ll  long long

ll ar[2000010],cm[2000010];
void totient(){
    ll n=2000000;
    for(ll i=1;i<=n;i++) ar[i]=i;
    for(ll i=2;i<=n;i++){
        if(ar[i]==i){
            ar[i]=i-1;
            for(ll j=i*2;j<=n;j+=i) ar[j]=(ar[j]/i)*(i-1);
        }
    }
}

int main(){
    ll n,m,d,a,b,t,c,x,y,i,j;
    totient();
    cm[1]=0;
    cm[2]=1;
    for(i=3;i<=2000000;i++){
        x=i;
        c=1;
        while(ar[x]!=1){
            x=ar[x];
            c++;
        }
        cm[i]=c+cm[i-1];
    }
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&m,&n);
        printf("%lld\n",cm[n]-cm[m-1]);
    }

    return 0;
}
