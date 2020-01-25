#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define		inf             99999999

ll ar[25][25];
ll Floyd_Warshall(ll n){
    ll i,j,k,sm,mn=10000000,c=0,id;
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                ar[i][j]=min(ar[i][j],ar[i][k]+ar[k][j]);
            }
        }
    }
    for(i=0;i<n;i++){
        sm=0;
        for(j=0;j<n;j++){
            if(i!=j && ar[i][j]!=inf){
                sm+=ar[i][j];
                c++;
            }
        }
        if(sm<mn){
            mn=sm;
            id=i;
        }
        else if(sm==mn) id=min(id,i);
    }
    return id;
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,k,x,y,z,t;
    while(SS(a,b)&&a||b){
        map<ll,string>ls;
        for(i=0;i<25;i++){
            for(j=0;j<25;j++){
                if(i==j) ar[i][j]=0;
                else ar[i][j]=inf;
            }
        }
        for(i=0;i<a;i++){
            string s;
            cin>>s;
            ls[i]=s;
        }
        for(i=0;i<b;i++){
            SSS(x,y,z);
            ar[x-1][y-1]=z;
            ar[y-1][x-1]=z;
        }
        printf("Case #%lld : ",++c);
        cout<<ls[Floyd_Warshall(a)]<<nn;
    }

    return 0;
}
