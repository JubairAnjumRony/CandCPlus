#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int h=0;int l=0;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        //int min=arr[i];
        if(arr[i]>max &&n>1){
            max=arr[i];
            ++h;
        }
        else if(arr[i]<min&&n>1){
            min=arr[i];
            ++l;
        }

    }
    
    cout<<h+l;
    cout<<endl;
    
    return 0;
}