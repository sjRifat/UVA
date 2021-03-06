// https://acmph.blogspot.com/2019/12/uva-10484-divisibility-of-factors.html

#include<bits/stdc++.h>
using namespace std;
#define ll  long long

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
    ll n,m,d,a,b,x,y,i,j;
    sieve();
    while(scanf("%lld %lld",&n,&d)&&n||d){
        map<ll,ll>mn,md;
        ll p=0;
        x=d;
        for(i=0;v[i]*v[i]<=x;i++){
            if(x%v[i]==0){
                while(x%v[i]==0){
                    x/=v[i];
                    md[v[i]]++;
                }
            }
        }
        if(x!=1) md[x]++;
        for(j=2;j<=n;j++){
            x=j;
            for(i=0;v[i]*v[i]<=x;i++){
                if(x%v[i]==0){
                    while(x%v[i]==0){
                        x/=v[i];
                        mn[v[i]]++;
                    }
                }
            }
            if(x!=1) mn[x]++;
        }
        for(auto i : md){
            x=i.first;
            y=i.second;
            mn[x]-=y;
        }
        ll mul=1;
        for(auto i : mn){
            if(i.second<0){
                p=1;
                break;
            }
            mul*=(i.second+1);
        }
        if(p) printf("0\n");
        else printf("%lld\n",mul);
    }

    return 0;
}
