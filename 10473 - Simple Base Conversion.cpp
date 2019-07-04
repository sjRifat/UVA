#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	sf1(a)          scanf("%lld",&a)
#define 	sf2(a,b)        scanf("%lld%lld",&a,&b)
#define 	sf3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    ll a,b,c,i,j,t,k=0,m,n,o;
    string s;
    while(cin>>s)
    {
        string s1,s2;
        ll x,y,z;
        if(s[0]=='-')
            break;
        if(s[1]!='x')
        {
            x=stoll(s);
            while(x!=0)
            {
                y=x%16;
                x/=16;
                if(y<=9)
                    s1.pb(char(y+48));
                else
                {
                    if(y==10)
                        s1.pb('A');
                    else if(y==11)
                        s1.pb('B');
                    else if(y==12)
                        s1.pb('C');
                    else if(y==13)
                        s1.pb('D');
                    else if(y==14)
                        s1.pb('E');
                    else if(y==15)
                        s1.pb('F');
                }

            }
            s1.pb('x');
            s1.pb('0');
            reverse(all(s1));
            cout<<s1<<nn;
        }
        else
        {
            ll base=1,val=0;
            s1.assign(s,2,zz(s)-2);
            for(int i=zz(s1)-1; i>=0; i--)
            {
                if(s1[i]>='0' && s1[i]<='9')
                {
                    val+=(s1[i]-48)*base;
                    base=base*16;
                }
                else if(s1[i]>='A' && s1[i]<='F')
                {
                    val+=(s1[i]-55)*base;
                    base=base*16;
                }
            }
            printf("%lld\n",val);
        }
    }

    return 0;
}
