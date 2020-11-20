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

bool cmp(string a,string b){
    if(zz(a)!=zz(b)) return zz(a)<zz(b);
    else return a<b;
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,ct,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    string s;
    vector<string>v;
    while(cin>>s){
        if(s=="9"){
            ll p=0;
            sort(all(v),cmp);
            for(i=0;i<zz(v)-1;i++){
                x=zz(v[i]);
                for(j=i+1;j<zz(v);j++){
                    ct=0;
                    for(k=0;k<x;k++){
                        if(v[i][k]==v[j][k]) ct++;
                    }
                    if(ct==x){
                        p=1;
                        break;
                    }
                }
                if(p==1) break;
            }
           if(p==0) printf("Set %lld is immediately decodable\n",++c);
           else  printf("Set %lld is not immediately decodable\n",++c);
           v.clear();
        }
        else v.pb(s);
    }

    return 0;
}
