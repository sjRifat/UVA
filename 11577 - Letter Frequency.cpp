#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	PB 			    pop_back
#define     all(p)          p.begin(),p.end()
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    ll a,b,c,i,j,t,k=1,m,n,o,p,y,z;
//    string s;
    char s[222];
    cin>>n;
    while(n--)
    {
        scanf(" %[^\n]",s);
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>=65 && s[i]<=92)
                s[i]=s[i]+32;
        }
        ll ar[26]= {0};
        ll ss=1;
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>=97 && s[i]<=122)
                ar[s[i]-'a']++;
            if(s[i]>=97 && s[i]<=122 && ar[s[i]-'a']>ss)
                ss=ar[s[i]-'a'];
        }
        for(i=0; i<26; i++)
        {
            if(ar[i]==ss)
                cout<<char(i+'a');
        }
        cout<<endl;
    }

    return 0;
}
