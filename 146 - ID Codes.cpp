#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s and s!="#")
    {
        int st= -1,ed;
        int j1 = -1;
        int n=s.size();
        for(int i=0; i<n-1; i++)
        {
            if(s[i]<s[i+1])
                st=i;
        }
        if(st==-1)
        {
            cout<<"No Successor"<<endl;
            continue;
        }

        for(int i=0; i<n; i++)
        {
            if(s[i]>s[st])
                ed=i;
        }
        swap(s[st],s[ed]);

        sort(s.begin()+st+1,s.end());
        cout<<s<<endl;
    }

    return 0;
}
