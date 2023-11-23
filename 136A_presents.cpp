#include<iostream>
using namespace std;

int main(){
    int n,a;
    cin>>n;
    int arr[n];
    int i;
    for(int i=0;i<n;i++){
        cin>>a;
        arr[a-1]=i+1;

    }
    for(int i=0;i<n;i++){
    
        cout<<arr[i]<<" ";
    }

cout<<endl;
    return 0;
}
