#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h[n],a[n];
    int count=0;
    for(int i=0;i<n;i++){
           
            cin>>h[i]>>a[i];
           
           
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(h[i]==a[j]){
            count++;
            }
            
        }
    }
    cout<<count<<endl;
    return 0;
}