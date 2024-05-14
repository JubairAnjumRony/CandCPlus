#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,y;
    cin>>w>>y;
     int max;
    if(w>y){
     max=w;
    }
    else {max=y;
    }
    
    if(max==1)
    cout<<1<<"/"<<1<<endl;
    else if(max==2)
    cout<<5<<"/"<<6<<endl;
    else if(max==3)
    cout<<"2/3"<<endl;
    else if(max==4)
    cout<<1<<"/"<<2<<endl;
    else if(max==5)
    cout<<1<<"/"<<3<<endl;
    else if(max==6)
    cout<<1<<"/"<<6<<endl;
    else
    cout<<0<<"/"<<1<<endl;
    return 0;
}