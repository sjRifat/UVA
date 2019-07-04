#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    ll a,b,c,i,j,t,k=1,m,n,o,p,x,y,z;
    string s;
    while(getline(cin,s)){
        c=0;
        for(i=0;i<zz(s);i++){
            if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
        }
        s.insert(0,".");
        for(i=0;i<zz(s);i++){
            if((s[i+1]>='a'&&s[i+1]<='z'&&s[i]<'a') || (s[i+1]>='a'&&s[i+1]<='z'&&s[i]>'z'))
                c++;
        }
        cout<<c<<nn;
    }

    return 0;
}
