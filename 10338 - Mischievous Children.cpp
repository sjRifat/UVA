#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;

ll pr[]={2,3,5,7,11,13,17,19};

int main()
{
//    freopen("input.txt","r",stdin);
    ll t,a,b,n,i,k,j,c=0;
    string s;
    scanf("%lld",&t);
    while(t--){
        cin>>s;
        vector<ll>v,vu,vd;
        ll ar[27];
        memset(ar,0,sizeof(ar));
        n=s.size();
        for(i=0;i<n;i++) ar[s[i]-'A']++;
        for(i=0;i<26;i++){
            if(ar[i]>1) v.push_back(ar[i]);
        }
        for(i=2;i<=n;i++){
            ll x=i;
            for(j=0;pr[j]<=x;j++){
                if(x%pr[j]==0){
                    while(x%pr[j]==0){
                        x/=pr[j];
                        vu.push_back(pr[j]);
                    }
                }
            }
        }
        for(i=0;i<(ll)v.size();i++){
            ll y=v[i];
            for(k=2;k<=y;k++){
                ll x=k;
                for(j=0;pr[j]<=x;j++){
                    if(x%pr[j]==0){
                        while(x%pr[j]==0){
                            x/=pr[j];
                            vd.push_back(pr[j]);
                        }
                    }
                }
            }
        }
        vd.push_back(21);
        sort(vu.begin(),vu.end());
        sort(vd.begin(),vd.end());
        ll mul=1;
        for(i=0,j=0;i<(ll)vu.size();i++){
            if(vu[i]==vd[j]) j++;
            else mul*=vu[i];
        }
        printf("Data set %lld: %lld\n",++c,mul);
    }

    return 0;
}
