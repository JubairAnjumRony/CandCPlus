#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
        
            cin>>a[i];

        }
        sort(a,a+2*n);
        bool result=true;
        for(int i=0;i<2*n;i+=2){
            if((a[i]+a[i+1])%2==0){
                result=false;
                break;
            }
           
        }
        if(result==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}