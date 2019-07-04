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
    int lie,z;
    scanf("%d",&lie);
    getchar();
    while(lie--){
        int c1,c2,x,i,j,y,mx;
        string s;
        vector<int>v;
        getline(cin,s);
        s.pb(' ');
        for(i=0; i<(ll)zz(s); i++){
            c1=0;
            if(s[i]>='0' && s[i]<='9'){
                while(s[i]!=' '){
                    c1=c1*10+s[i]-'0';
                    i++;
                }
                v.pb(c1);
            }
        }
        mx=0;
        for(i=0; i<zz(v)-1; i++){
            for(j=i+1;j<zz(v);j++){
                x=gcd(v[i],v[j]);
                if(x>mx) mx=x;
            }
        }
        printf("%d\n",mx);
    }

    return 0;
}
