#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
    string s;
    cin>>s;
    int i;
    for(int i=0;i<s.length();i++){
    s[i]=tolower(s[i]);
    }
    for(int i=0;i<s.length();i++){
    if(s[i]=='y'&&s[i+1]=='e'&&s[i+2]=='s'){
    cout<<"YES";
    break;
    }
    else
    cout<<"NO";
    break;
    
    }
    cout<<endl;
    }
    return 0;
}