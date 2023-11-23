#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int f=0;
        int s=0;
    while(t--){
        int n;
        cin>>n;
        
        if((n+1)%3==0 || (n-1)%3==0){
            cout<<"First";
            f++;
        }
        else
        cout<<"Second";
        s++;

       cout<<endl;
    }
   
    return 0;
}