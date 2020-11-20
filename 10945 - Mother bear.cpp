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
//    freopen("output.txt","w",stdout);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    string s;
    while(getline(cin,s)&&s!="DONE"){
        string s1,s2;
        for(i=0;i<zz(s);i++){
            if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        }
        for(i=0;i<zz(s);i++){
            if(s[i]>='a' && s[i]<='z'){
                s1.pb(s[i]);
            }
        }
        s2=s1;
        reverse(all(s1));
        if(s2==s1) printf("You won’t be eaten!\n");
        else printf("Uh oh..\n");
    }

    return 0;
}
