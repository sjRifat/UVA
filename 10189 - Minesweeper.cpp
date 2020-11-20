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

int dr[]={-1,-1,-1, 0, 0, 1, 1, 1};
int dc[]={-1, 0, 1,-1, 1,-1, 0, 1};

int main()
{
    char str[110][110];
    int ar[110][110];
    int ks = 1,i,j,r,c,cnt,x,y,k;
    while(scanf("%d%d",&r,&c)==2 && r && c){
        for(i=0;i<r;i++)
            scanf("%s",str[i]);

        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(str[i][j]=='*'){
                    ar[i][j]=-1;
                    continue;
                }
                cnt = 0;
                for(k=0;k<8;k++){
                    x = i+dr[k];
                    y = j+dc[k];

                    if(x>=0 &&x<r && y>=0 && y<c)
                        if(str[x][y]=='*')
                            cnt++;
                }
                ar[i][j]=cnt;
            }
        }
        if(ks!=1)
            printf("\n");
        printf("Field #%d:\n",ks++);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(ar[i][j]==-1)
                    printf("*");
                else
                    printf("%d",ar[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
