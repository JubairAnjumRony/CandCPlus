#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    string c="codeforces";
    cin>>s;
    int count = 0;
   for(int i=0;i<c.length();i++){
    if(c[i] != s[i])
          count++;
    
   }

   cout<<count<<endl;
    }

    return 0;
}
