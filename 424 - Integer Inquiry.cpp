#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,x,a,y;
    char c;
    string res(111,'0');
    string s;
    while(cin>>s and s!="0"){
        reverse(s.begin(),s.end());
        s.push_back('0');
        for(i=0;i<(int)s.size();i++){
            x=res[i]-'0';
            x+=(s[i]-'0');
            y=res[i+1]-'0';
            if(x>9){
                a=x%10;
                x/=10;
                c=a+'0';
                res[i]=c;
                y+=x;
                c=y+'0';
                res[i+1]=c;
            }
            else{
                c=x+'0';
                res[i]=c;
            }
        }
    }
    reverse(res.begin(),res.end());
    for(i=0;;i++){
        if(res[i]!='0'){
            for(j=i;j<(int)res.size();j++) 
                cout<<res[j];
            cout<<endl;
            break;
        }
    }

    return 0;
}
