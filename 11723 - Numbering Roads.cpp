#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,n,c=0;
    while(scanf("%d%d",&r,&n)&&r||n){
        if(n*27LL<r) printf("Case %d: impossible\n",++c);
        else{
            printf("Case %d: %d\n",++c,(r+n-1)/n-1);
        }
    }

    return 0;
}
