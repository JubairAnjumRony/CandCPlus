#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        int count=0;
        count=a;
         count+=b/3;
        if(b%3==0){
           
            count+=c/3;
             if(c%3!=0){
             count+=1;}
            
            //if(c>=3-(b%3))
            cout<<count<<endl;
            // else
            // cout<<"-1"<<endl;
        }
        if(b%3!=0){
           
             int n=(b%3);
             int tent=(c+n)/3;
             
             count+=tent;
              if((c+n)%3!=0){
             count+=1;}

             if(c>=3-(b%3))
             cout<<count<<endl;
              else
              cout<<"-1"<<endl;

        }
        }
        
    
    return 0;
}
