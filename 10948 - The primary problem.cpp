#include<bits/stdc++.h>
using namespace std;
int ar[1000010];
vector<int>v;
void sieve()
{
    int i,j,n=1000010;
    v.push_back(2);
    for(i=3; i<n; i+=2)
    {
        if(ar[i]==0)
        {
            v.push_back(i);
            if(i>n/i)
                continue;
            for(j=i*i; j<=n; j+=(i+i))
                ar[j]=1;
        }
    }
}
int main()
{
    int i,j,n,x,y;
    sieve();
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {
            int mx=-1;
            i=0;
            j=v.size()-1;
            while(i<=j)
            {
                if(v[i]+v[j]==n)
                {
                    if(v[j]-v[i]>mx){
                        mx=v[j]-v[i];
                        x=v[i];
                        y=v[j];
                    }
                    i++;
                    j--;
                }
                else if(v[i]+v[j]<n)
                    i++;
                else
                    j--;
            }

            if(mx==-1)
            {
                printf("%d:\n", n);
                printf("NO WAY!\n");
            }
            else{
                printf("%d:\n", n);
                printf("%d+%d\n", x,y);
            }
        }
    }
    return 0;
}
