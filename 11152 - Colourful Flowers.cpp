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
    double a,b,c,s,p,ro,ta,vi,r1,u,sf;
    while(cin>>a>>b>>c)
    {
        s= (a+b+c)/2;
        p= (sqrt((s-a)*(s-b)*(s-c)/s));
        ro= pi*p*p;
        ta= sqrt(s*(s-a)*(s-b)*(s-c));
        vi= (ta-ro);
        r1= (a*b*c)/(4*ta);
        u= pi*r1*r1;
        sf= u-ta;
        printf("%.4f %.4f %.4f\n",sf,vi,ro);
    }
    
    return 0;
}
