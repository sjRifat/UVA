#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    while(S(n)==1){
        ll ar[50050],up,dn;
        set<ll>st;
        for(i=0;i<n;i++){
            S(a);
            st.insert(a);
        }
        vll v(zz(st));
        copy(all(st),v.begin());
        S(t);
        while(t--){
            S(x);
            if(zz(v)==1){
                if(x==v[0]) printf("X X\n");
                else if(x<v[0]) printf("X %lld\n",v[0]);
                else printf("%lld X\n",v[0]);
                continue;
            }
            if(x<v[0]) printf("X %lld\n",v[0]);
            else if(x==v[0]) printf("X %lld\n",v[1]);
            else if(x>v[zz(v)-1]) printf("%lld X\n",v[zz(v)-1]);
            else if(x==v[zz(v)-1]) printf("%lld X\n",v[zz(v)-2]);
            else{
                auto it=upper_bound(all(v),x);
                up=it-v.begin();
                if(x==v[up-1]) dn=up-2;
                else dn=up-1;
                printf("%lld %lld\n",v[dn],v[up]);
            }
        }
    }

    return 0;
}
