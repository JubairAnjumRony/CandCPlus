#include<iostream>
#include<math.h>
using namespace std;
using lli = long long int;
int main(){
 int t;
 cin>>t;
 while(t--){
    lli n;
    cin>>n;
    lli sum=0;
    lli a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    double root=sqrt(sum);
    if(floor(root)==root){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
 }
 return 0;
}