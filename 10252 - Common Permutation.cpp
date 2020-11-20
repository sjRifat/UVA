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

int main()
{
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z;
    string s1,s2;
    while(getline(cin,s1),getline(cin,s2)){
        string s3;
        ll ar[27]={0},br[27]={0};
        for(i=0;i<zz(s1);i++){
            ar[s1[i]-'a']++;
        }
        for(i=0;i<zz(s2);i++){
            br[s2[i]-'a']++;
        }
        for(i=0;i<26;i++){
            for(j=0;j<min(ar[i],br[i]);j++){
                s3.pb((char(i)+'a'));
            }
        }
        cout<<s3<<nn;
    }

    return 0;
}
