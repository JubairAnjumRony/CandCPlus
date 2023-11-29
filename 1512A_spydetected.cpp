#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index,count=0;
    for(int i=0;i<n;i++){
        if(arr[0]!=arr[i]){
            index=i;
            count++;
        }
    }
    if(count==1){
        cout<<index+1<<endl;
    }
    else
    cout<<"1"<<endl;
}
    return 0;
    }
