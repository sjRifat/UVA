// if input is negative, take the absolute value,
// get the answer. the biggest odd which divide the answer with no remainder
// will be the answer for negative input..
// ex: -64->64, ans->6, biggest odd which devide 6 is 3
// so answer 3..

#include<bits/stdc++.h>
using namespace std;
typedef	    long long       ll;
#define     OO              2147483650

map<ll,ll>tmp,ar;

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z;
    for(i=2;i<46341;i++){
        x=i;
        c=1;
        if(!tmp[i]){
            while(x<=OO){
                ar[x]=c;
                c++;
                tmp[x]=1;
                x*=i;
            }
        }
    }

    while(scanf("%lld",&n)&&n){
        if(n>0){
            if(!ar[n]) printf("1\n");
            else printf("%lld\n",ar[n]);
        }
        else{
            x=-n;
            if(!ar[x]) printf("1\n");
            else{
                x=ar[x];
                while(x%2==0) x/=2;
                printf("%lld\n",x);
            }
        }
    }

    return 0;
}
