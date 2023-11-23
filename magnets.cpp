#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int r=1;
    int pm=0,mp=0,si=0;
    
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
        if(s == "01"){
            pm=1;

        }
        else if(s=="10"){
            mp=1;
        }
        else{
        si=1;
        }
    }

    
    r=(pm+mp+si);
    cout<<r<<endl;
    return 0;
}