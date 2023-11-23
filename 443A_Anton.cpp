#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    //cin>>s;
    getline(cin,s);
    int a=0;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
      if(s[i]!=s[i+1]){
    
        if(s[i]>='a' && s[i]<='z'){
          a++;

        }
      }
    }
    cout<<a;
    return 0;
}

