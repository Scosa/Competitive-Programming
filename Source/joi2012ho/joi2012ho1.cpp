#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int ans;
string s;

int check(int a){
    int J=0;
    int O=0;
    int I=0;
    for(int i=a;;i++){
        if(i==s.size()-1)return s.size()-1;
        if(s[i]!='J')break;
        J++;
    }
    for(int i=a+J;;i++){
        if(s[i]!='O')break;
        O++;
        if(i==s.size()-1)return s.size()-1;
    }
    for(int i=a+J+O;;i++){
        
        if(s[i]!='I')break;
        I++;
        if(i==s.size()-1)break;
    }
    if(J>=O&&O<=I)ans=max(ans,O);
    return a+J+O+I-1;
}




int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>s;


    for(int i=0;i<s.size();i++){
        if(s[i]=='J')  i=check(i);
    }

    cout<<ans<<endl;
}

