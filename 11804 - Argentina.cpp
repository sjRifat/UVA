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

struct arg
{
    char name[22];
    int attack;
    int defence;
};

void team_sort(struct arg team[])
{
    int i,j;
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(team[i].attack<team[j].attack)
            {
                swap(team[i].attack,team[j].attack);
                swap(team[i].name,team[j].name);
                swap(team[i].defence,team[j].defence);
            }
        }
    }
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(team[i].attack==team[j].attack)
            {
                if(team[i].defence>team[j].defence)
                {
                    swap(team[i].attack,team[j].attack);
                    swap(team[i].name,team[j].name);
                    swap(team[i].defence,team[j].defence);
                }
            }
        }
    }
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(team[i].attack==team[j].attack && team[i].defence==team[j].defence)
            {
                if(strcmp(team[i].name,team[j].name)>0)
                {
                    swap(team[i].attack,team[j].attack);
                    swap(team[i].name,team[j].name);
                    swap(team[i].defence,team[j].defence);
                }
            }
        }
    }
}

void output (struct arg team[])
{
    int i,j,k=0,l=0;
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(team[i].name,team[j].name)>0)
            {
                swap(team[i].name,team[j].name);
            }
        }
    }
    cout<<'(';
    for(i=0; i<5; i++)
    {
        if(k==0)
            cout<<team[i].name;
        else
            cout<<", "<<team[i].name;
        k++;
    }
    cout<<')'<<nn;
    for(i=5; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(strcmp(team[i].name,team[j].name)>0)
            {
                swap(team[i].name,team[j].name);
            }
        }
    }
    cout<<'(';
    for(i=5; i<10; i++)
    {
        if(l==0)
            cout<<team[i].name;
        else
            cout<<", "<<team[i].name;
        l++;
    }
    cout<<')'<<nn;
}

int main()
{
    int a,b,c=0,i,j,t,k,m,n,o,x,y,z;

    cin>>t;
    while(t--)
    {
        struct arg team[10];
        for(i=0; i<10; i++)
            cin>>team[i].name>>team[i].attack>>team[i].defence;
            printf("Case %d:\n",++c);
        team_sort(team);
        output(team);
    }

    return 0;
}
