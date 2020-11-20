#include <bits/stdc++.h>
using namespace std;
typedef 	long long 		ll;
typedef 	vector<ll>		vll;
#define       pi             acos(-1)

int main()
{
    double a,n,l,w,r;
    cin>>n;
    while(n--)
    {
        cin>>l;
        w=.6*l;
        r=.2*l;
        double area=l*w;
        double circle_area=pi*r*r;
        double rest_area=area-circle_area;
        printf("%.2lf %.2lf\n",circle_area,rest_area);
    }
    return 0;
}
