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
#define 	SSS(a,b,c,d)    scanf("%lf %lf %lf %lf",&a,&b,&c,&d)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    double f,d,lie,n;
    while(SSS(lie,d,n,f)&&lie){
        double fac=(d*f)/100;
        double s=0,i,j;
        int c=0,p1=0,p2=0;
        while(true){
            s+=d;
            d-=fac;
            if(d<0) d=0;
            c++;
            if(s>lie){
                p2=1;
                break;
            }
            s-=n;
            if(s<0){
                p1=1;
                break;
            }

        }
        if(p2==1) printf("success on day %d\n",c);
        else if(p1==1) printf("failure on day %d\n",c);
    }

    return 0;
}
