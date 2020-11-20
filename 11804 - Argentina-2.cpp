#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		ss              ' '
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

struct arg{
    string name;
    int attack;
    int defence;
};

bool cmp1(struct arg a,struct arg b){
    if(a.attack!=b.attack) return a.attack>b.attack;
    if(a.attack==b.attack && a.defence!=b.defence) return a.defence<b.defence;
    return a.name<b.name;
}
bool cmp2(struct arg a,struct arg b){
    return a.name<b.name;
}

void output (struct arg team[]){
    int i,j,k=0,l=0;
    cout<<'(';
    for(i=0; i<5; i++){
        if(k==0) cout<<team[i].name;
        else cout<<", "<<team[i].name;
        k++;
    }
    cout<<')'<<nn;
    cout<<'(';
    for(i=5; i<10; i++){
        if(l==0) cout<<team[i].name;
        else cout<<", "<<team[i].name;
        l++;
    }
    cout<<')'<<nn;
}

int main()
{
//    freopen("input.txt","r",stdin);
    int a,b,c=0,i,j,t,k,m,n,o,x,y,z;
    cin>>t;
    while(t--)
    {
        struct arg team[10];
        for(i=0; i<10; i++)
            cin>>team[i].name>>team[i].attack>>team[i].defence;
        printf("Case %d:\n",++c);
        sort(team,team+10,cmp1);
        sort(team,team+5,cmp2);
        sort(team+5,team+10,cmp2);
        output(team);
    }

    return 0;
}
