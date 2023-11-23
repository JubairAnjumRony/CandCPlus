#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=0;
    while(t>0){
        int n;
        
        cin>>n;
        if(n==1)
        count++;
        
        t--;
    }
    
        if(count>=1){
        cout<<"HARD"<<endl;
    }
    else
    cout<<"EASY"<<endl;
       
    
    
     return 0;
}