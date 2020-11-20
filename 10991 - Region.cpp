#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		ss              ' '
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define		sz(v)           v.size()
typedef		long long       ll;
typedef		vector<ll>      vll;

int main ()
{
    double a,b,c,A,B,C,i,j,t,k,m,n,o,x,s,y,z,Tarea,Carea,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        x=b+c;
        y=c+a;
        z=a+b;
        s=(x+y+z)/2;
        Tarea=sqrt(s*(s-x)*(s-y)*(s-z));
        A=acos((y*y+z*z-x*x)/(2*y*z));
        B=acos((x*x+z*z-y*y)/(2*x*z));
        C=acos((y*y+x*x-z*z)/(2*y*x));
        m=(a*a*A)/2;
        n=(b*b*B)/2;
        o=(c*c*C)/2;
        Carea=m+n+o;
        ans=Tarea-Carea;
        printf("%.6f\n",ans);
    }

    return 0;
}
