#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
       
        int xspace=x*1;
       int yspace=y*4;
       int screen=1;
       if(x==0 && y==0){
        screen=0;
       }
       if(y>2){
        screen=yspace/8;
       }
      
      int totalspace=screen*15;
      if(xspace+yspace>totalspace  || y>2&&yspace%8!=0){
        screen=screen+1;
    
      }
      cout<<screen<<endl;

      
    }
    
    return 0;
}