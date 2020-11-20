#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	nn 			    "\n"
#define   	ss 			    ' '
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c,i,j,k,m,n,o,x,y,z;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        c=0;
        x=0;
        for(i=0;i<s1.length();i++)
        {
            for(j=x;j<s2.length();j++)
            {
                if(s1[i]==s2[j])
                {
                    c++;
                    x=j+1;
                    break;
                }
            }
        }
        if(c==s1.length()) cout<<"Yes"<<nn;
        else cout<<"No"<<nn;
    }

    return 0;
}
