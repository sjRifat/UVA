#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;

bool ar[50050];
vector<ll>v;
void sieve(){
    ll i,j,n=50050;
    v.push_back(2);
    for(i=3;i<n;i+=2){
        if(!ar[i]){
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i;j<n;j+=(i+i)) ar[j]=true;
        }
    }
}

int main()
{
    ll a,b,i,j,m,n,k,t;
    sieve();
    while(scanf("%lld",&n)&&n){
        vector<ll>vp,vm[10000];
        m=n;
        for(i=0;v[i]*v[i]<=m;i++){
            if(m%v[i]==0){
                while(m%v[i]==0) m/=v[i];
                vp.push_back(v[i]);
            }
        }
        if(m!=1) vp.push_back(m);
        ll sm=0;
        for(i=0;i<(ll)vp.size();i++) sm+=(n/vp[i]);

        ll cnt=pow(2,(ll)vp.size());

        for(i=0;i<cnt;i++){
            for(j=0;j<(ll)vp.size();j++){
                if((i&(1<<j))>0) vm[i].push_back(vp[j]);
            }
        }
        for(i=1;i<cnt;i++){
            ll sum=1;
            if((ll)vm[i].size()>1){
                for(j=0;j<(ll)vm[i].size();j++) sum*=(vm[i][j]);
                sum=n/sum;
                if(vm[i].size()&1) sm+=sum;
                else sm-=sum;
            }
        }
        printf("%lld\n",n-sm);
    }

    return 0;
}
