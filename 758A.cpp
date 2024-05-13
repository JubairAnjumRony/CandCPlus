#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int max=*max_element(a,a+n);
    int count=0;
    for(int i=0;i<n;i++){
       if(a[i]!=max){
        count=count+(max-a[i]);
       }
    }
   cout<<count<<endl;
    return 0;
}