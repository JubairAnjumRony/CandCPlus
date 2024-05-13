#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
        string a;
        string b;
       
            cin>>a;
        
    
            cin>>b;
        
        int j=0,count=0;
        for(int i=0;i<n;i++){
            char chars=a[i];
            while(j<m&&b[j]!=chars){
            j++;
            }
               if(j != m && b[j]==chars){
            count++;
            j++;
        }

       
    }
    cout<<count<<"\n";
} 
     
}