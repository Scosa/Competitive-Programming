#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin>>n>>s;
  int op=0,mi=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='(') op++;
    else op--;
    mi=min(mi,op);
  }
  for(int i=0;i<-mi;i++) s='('+s,op++;
  for(int i=0;i<op;i++) s+=')';
  cout<<s<<endl;
  return 0;
}

