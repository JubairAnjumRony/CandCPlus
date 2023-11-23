#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p,q,i,j,f=0;
    cin>>p;
   int a[p];

    for(int i=0;i<p;i++)
        cin>>a[i];
        
    
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
        cin>>b[i];
      

  for(i=1;i<=n;i++){


    for(j=0;j<p;j++){
        if(i==a[j]){
           f=1;
           break;
        }
        else
        f=0;
    }
    if(f==0){
        for(int j=0;j<q;j++){
            if(i==b[j]){
                f=1;
                break;
            }
            else 
            f=0;

        }

    }
    if(f==0)
    break;
   
  }
   if(f==1){
        cout<<"I become the guy.";
    }
    else
    cout<<"Oh, my keyboard!";

    
    return 0;

}