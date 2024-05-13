#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        //  int n=stoi(s);
        int count=0;
        for(int i=0;i<=2;i++){
            count=count+s[i];
        }
     int  countb=0;
        for(int i=3;i<6;i++){
             countb=countb+s[i];
        }

        if(count==countb){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}