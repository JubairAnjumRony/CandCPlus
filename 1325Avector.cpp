#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;cin>>n;
       vector <int> num;
       int power=1;
       while(n>0){
        if(n%10>0){
            num.push_back((n%10)*power);
        }
        n=n/10;
        power=power*10;
       } 
       cout<<num.size();
       cout<<endl;
       for(int i=0;i<num.size();i++){
        cout<<num[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}