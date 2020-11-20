#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;

ll spf[10010];  //smallest prime factor

void spfgen(){
    ll i,j;
    for(i=1;i<10010;i++){
        if(i%2==0) spf[i]=2LL;
        else spf[i]=i;
    }
    for(i=3;i*i<10010;i+=2){
        if(spf[i]==i){ // if prime
            for(j=i*i;j<10010;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,q,m,n,o,x,y,z,ar[200010];
    spfgen();
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&m,&n);
        ll cm[m+1],cn[n+1];
        memset(cm,0,sizeof(cm));
        memset(cn,0,sizeof(cn));
        for(i=2;i<=n;i++){
            x=i;
            while(x!=1){
                cn[spf[x]]++;
                x/=spf[x];
            }
        }
        x=m;
        while(x!=1){
            cm[spf[x]]++;
            x/=spf[x];
        }
        ll mn=555555;
        for(i=2;i<=m;i++){
            if(cm[i]){
                x=cn[i]/cm[i];
                mn=min(mn,x);
            }
        }
        if(mn==555555LL || mn==0LL) printf("Case %lld:\nImpossible to divide\n",++c);
        else printf("Case %lld:\n%lld\n",++c,mn);
    }

    return 0;
}
