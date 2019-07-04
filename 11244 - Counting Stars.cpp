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
    ll a,b,i,j,t,k,lie;
    while(SS(a,b)&&a||b){
        ll s=0;
        char c[101][101];
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                scanf(" %c",&c[i][j]);
            }
        }
        if(a==1 && b==1){
            if(c[0][0]=='*') s++;
        }
        else if(a==1){
            if(c[0][0]=='*' && c[0][1]=='.') s++;
            if(c[0][b-1]=='*' && c[0][b-2]=='.') s++;
            for(i=1;i<b-1;i++){
                if(c[0][i]=='*' && c[0][i-1]=='.' && c[0][i+1]=='.') s++;
            }
        }
        else if(b==1){
            if(c[0][0]=='*' && c[1][0]=='.') s++;
            if(c[a-1][0]=='*' && c[a-2][0]=='.') s++;
            for(i=1;i<a-1;i++){
                if(c[i][0]=='*' && c[i-1][0]=='.' && c[i+1][0]=='.') s++;
            }
        }
        else{
            if(c[0][0]=='*' && c[0][1]=='.' && c[1][0]=='.' && c[1][1]=='.') s++;
            if(c[a-1][0]=='*' && c[a-2][0]=='.' && c[a-2][1]=='.' && c[a-1][1]=='.') s++;
            if(c[0][b-1]=='*' && c[0][b-2]=='.' && c[1][b-2]=='.' && c[1][b-1]=='.') s++;
            if(c[a-1][b-1]=='*' && c[a-2][b-1]=='.' && c[a-1][b-2]=='.' && c[a-2][b-2]=='.') s++;
            for(i=1;i<b-1;i++){
                if(c[0][i]=='*' && c[0][i-1]=='.' && c[0][i+1]=='.' && c[1][i-1]=='.' && c[1][i+1]=='.' && c[1][i]=='.') s++;
            }
            for(i=1;i<a-1;i++){
                if(c[i][0]=='*' && c[i-1][0]=='.' && c[i+1][0]=='.' && c[i-1][1]=='.' && c[i+1][1]=='.' && c[i][1]=='.') s++;
            }
            for(i=1;i<b-1;i++){
                if(c[a-1][i]=='*' && c[a-1][i+1]=='.' && c[a-1][i-1]=='.' && c[a-2][i]=='.' && c[a-2][i+1]=='.' && c[a-2][i-1]=='.') s++;
            }
            for(i=1;i<a-1;i++){
                if(c[i][b-1]=='*' && c[i-1][b-1]=='.' && c[i+1][b-1]=='.' && c[i][b-2]=='.' && c[i-1][b-2]=='.' && c[i+1][b-2]=='.') s++;
            }
            for(i=1;i<a-1;i++){
                for(j=1;j<b-1;j++){
                    if(c[i][j]=='*'){
                        if(c[i][j+1]=='.' && c[i][j-1]=='.' && c[i+1][j+1]=='.' && c[i-1][j-1]=='.' && c[i+1][j]=='.' && c[i-1][j]=='.' && c[i-1][j+1]=='.' && c[i+1][j-1]=='.')
                            s++;
                    }
                }
            }
        }
        printf("%lld\n",s);
    }

    return 0;
}
