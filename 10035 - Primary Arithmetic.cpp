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
    int a,b,c,i,j,t,k,m,n,o,p,x,y,z;
    while(scanf("%d%d",&m,&n)&&m||n)
    {
        c=0;
        k=0;
        a=max(m,n);
        b=min(m,n);
        i=0,j=0;
        int ar[10]={0},br[10]={0};
        while(a!=0){
            x=a%10;
            ar[i]=x;
            a/=10;
            c++;
            i++;
        }
        while(b!=0){
            y=b%10;
            br[j]=y;
            b/=10;
            j++;
        }
        for(i=0;i<c;i++){
            if(ar[i]+br[i]>9){
                k++;
                ar[i+1]++;
            }
        }
        if(k==0) printf("No carry operation.\n");
        else if(k==1) printf("%d carry operation.\n",k);
        else printf("%d carry operations.\n",k);
    }

    return 0;
}
