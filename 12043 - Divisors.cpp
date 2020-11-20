#include<bits/stdc++.h>
using namespace std;
#define ll  long long

ll sod[100010],nod[100010];

int main(){
    ll n,m,d,a,b,x,y,t,i,j,k;
    for(i=1;i<=100000;i++){
        for(j=i;j<=100000;j+=i){
            nod[j]++;
            sod[j]+=i;
        }
    }
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld %lld",&a,&b,&k);
        a+=k-1;
        a/=k;
        a*=k;
        ll nods=0,sods=0;
        for(i=a;i<=b;i+=k){
            nods+=nod[i];
            sods+=sod[i];
        }
        printf("%lld %lld\n",nods,sods);
    }

    return 0;
}
