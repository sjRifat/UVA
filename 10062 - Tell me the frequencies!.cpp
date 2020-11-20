#include<bits/stdc++.h>
using namespace std;

struct str{
    int a,b;
}st[1001];

bool cmp(str x,str y){
    if(x.b!=y.b) return x.b<y.b;
    return x.a>y.a;
}

int main()
{
    char str[1001];
    int c=0;
    while(gets(str))
    {
        if(c>0) printf("\n");
        c++;
        int arr[250]= {0},id=0;
        int l = strlen(str);
        int x;
        if(str[l-3]=='\\' and (str[l-2]=='n' or str[l-2]=='r')) l-=2;
        for(int i=0; i<l; ++i)
            arr[str[i]]++;
        for(int i=0;i<250;i++)
        {
            if(arr[i])
            {
                st[id].a=i;
                st[id].b=arr[i];
                id++;
            }
        }
        sort(st,st+id,cmp);
        for(int i=0;i<id;i++)
            printf("%d %d\n",st[i].a,st[i].b);
    }
    return 0;
}
