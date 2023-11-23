#include<iostream>
using namespace std;

int main(){
    
    int r,b;
    cin>>r>>b;
    int p,q;
    if(r==b){
        p=r;
        q=0;
        cout<<p<<" "<<q<<endl;
    }
    if(r>b){
        p=b;
        q=(r-b)/2;
         cout<<p<<" "<<q<<endl;
    }
    if(r<b){
        p=r;
        q=(b-r)/2;
         cout<<p<<" "<<q<<endl;
    }
    return 0;
}