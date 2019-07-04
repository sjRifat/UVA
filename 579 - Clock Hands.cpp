#include<bits/stdc++.h>
using namespace std;
#define   	pb 			    push_back
#define   	nn 			    "\n"
#define   	ss 			    ' '
typedef 	long long 		ll;
typedef 	vector<ll>		vll;

int main()
{
    double a,b,c,i,j,k,h,m,n,o,x,y,z;
    string s,s2,s1;
    while(cin>>s&&s!="0:00")
    {
        if(s.length()==5)
        {
            s2.assign(s,3,2);
            s1.assign(s,0,2);
        }
        else
        {
            s2.assign(s,2,2);
            s1.assign(s,0,1);
        }
        x=stod(s1);
        m=stod(s2);
        h=x*5+m/12;
        y=(abs(h-m))*6;
        if(y>180)
            y=360-y;
        printf("%.3lf\n",y);
    }

    return 0;
}
