#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[2*n];
        int count=0;
        for(int i=0;i<2*n;i++){
        
            cin>>a[i];
            if(a[i]%2!=0)
            count++;

        }
        if(count==n){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        
    }
    return 0;
}