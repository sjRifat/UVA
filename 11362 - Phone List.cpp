#include<bits/stdc++.h>
using namespace std;

struct node{
    bool endmark;
    node *next[11];
    node(){
        endmark=false;
        for(int i=0;i<11;i++) next[i]=NULL;
    }
} *root;

bool Insert(string s,int n){
    node *cur=root;
    for(int i=0;i<n;i++){
        int id=s[i]-'0';
        if(cur->next[id]==NULL) cur->next[id]=new node();
        cur=cur->next[id];
        if(cur->endmark==true) return true;
    }
    cur->endmark=true;
    for(int i=0;i<10;i++){
        if(cur->next[i]!=NULL) return true;
    }
    return false;
}

void Delete(node *cur){
    for(int i=0;i<=9;i++){
        if(cur->next[i]) Delete(cur->next[i]);
    }
    delete(cur);
}

int main(){
    int n,i,q,t,c=0;
    cin>>t;
    while(t--){
        root=new node();
        int p=0;
        cin>>n;
        while(n--){
            string s;
            cin>>s;
            bool bb=Insert(s,(int)s.size());
            if(bb) p=1;
        }
        Delete(root);
        if(p) printf("NO\n",++c);
        else printf("YES\n",++c);
    }

    return 0;
}
