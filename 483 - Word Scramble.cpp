#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	nn 			    "\n"
#define   	ss 			    ' '
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c,i,j,k,m,n,o,x,y=0,z;
    string s,s1,s2;
    while(getline(cin,s))
    {
        s.pb(ss);
        s1= {""};
        k=0;
        for(i=0; i<s.length(); i++)
        {
            if(s[i]==ss)
            {
                for(j=i-1; j>=k; j--)
                    s1.pb(s[j]);
                s1.pb(ss);
                k=i+1;
            }
        }
        s1.erase(s1.length()-1,1);
        cout<<s1<<nn;
    }

    return 0;
}
