#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int count=0;
        int c=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(i%2!=a[i]%2){
                c++;
            }
            else{
            b++;
            }
            
        }
       
        if(c!=b){
            cout<<"-1"<<endl;
        }
    
        cout<<c<<endl;
    }
    return 0;
}