#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    string s;
    while(cin>>s){
        string s1,s2;
        vector<string>v;
        vector<string>::iterator it;
        for(i=0;i<zz(s);i++){
            for(j=1;j<=zz(s);j++){
                s1.assign(s,i,j);
                s2=s1;
                reverse(all(s2));
                it=find(all(v),s1);
                if(it==v.end() && s1==s2) v.pb(s1);
            }
        }
        cout<<"The string '"<<s<<"' contains "<<(ll)zz(v)<<" palindromes."<<nn;
    }

    return 0;
}
