#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a;
        cin>>b;
        string temp;
        for(int i=0;i<1;i++){
            temp[i]=a[i];
            a[i]=b[i];
            b[i]=temp[i];
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}