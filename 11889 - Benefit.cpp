/*
prime power factor -> a & c;
take from c, which power is greater than a and multiply;
*/

#include<bits/stdc++.h>
using namespace std;
#define ll  long long

bool ar[3200];
vector<ll>v;
void sieve(){
    ll i,j,n=3200;
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
    ll n,m,d,a,b,t,c,x,y,i,j;
    sieve();
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&a,&c);
        if(c%a) printf("NO SOLUTION\n");
        else{
            map<ll,ll>ma,mc;
            for(i=0;v[i]*v[i]<=a;i++){
                if(a%v[i]==0){
                    while(a%v[i]==0){
                        a/=v[i];
                        ma[v[i]]++;
                    }
                }
            }
            if(a!=1) ma[a]++;
            for(i=0;v[i]*v[i]<=c;i++){
                if(c%v[i]==0){
                    while(c%v[i]==0){
                        c/=v[i];
                        mc[v[i]]++;
                    }
                }
            }
            if(c!=1) mc[c]++;

            ll sm=1;
            for(auto i : mc){
                x=i.first;
                y=i.second;
                if(y>ma[x]){
                    for(j=0;j<y;j++) sm*=x;
                }
            }
            printf("%lld\n",sm);
        }
    }

    return 0;
}
