#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int screen=0;
        int xspace=x*1;
       int yspace=y*4;
      int  freespace=15-yspace;

    for(int i=1;i<30;i++) {
        if(y<=2 && x<=freespace){
            screen=1;
            break;
        }
        if(y>2 || x>freespace){
            y=y-4*2;
        screen ++;
        } 
    }
        cout<<screen<<endl;
    }
    
    return 0;
}