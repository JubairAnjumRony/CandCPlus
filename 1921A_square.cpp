#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int c[4][2];
     int a1=1,a2=1;
     for(int i=0; i<4; ++i){
        for(int j=0; j<2; ++j){
            cin>>c[i][j];
            if(c[i][0]==c[0][0]) a2=abs(c[i][1]-c[0][1]);
        }
     }
     cout<<a2*a2<<"\n";
    }
    return 0;
    }