#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
    int sum=0,count=0;
   for(int i=0;i<n;i++){
    if(arr[i]!=-1){
        sum=sum+arr[i];
    }
    if(arr[i]==-1){
         if(sum>0)
        sum--;
        else
        count++;

    }
   }
   cout<<count;
  
    return 0;
}