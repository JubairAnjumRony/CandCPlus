#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c1=1;
        int c2=2;
            int r=n-(c1*(n/3)+c2*(n/3));
        
        if(r>1 && r%2==0){
            c1=n/3;
            c2=n/3+1;
            
        }
        else if(r==0){
        c1=n/3;
        c2=n/3;
        
        }
        else{
        c1=n/3+1;
        c2=n/3;
        }
        cout<<c1<<" "<<c2<<endl; 
    }
    return 0;
}