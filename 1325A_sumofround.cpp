#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
            int power=1;
            int count=0;
        int number;
        while(n>0){
            if(n%10>0){
               
                count++;
               
            }
        
           // cout<<endl;
            n=n/10;
            power=power*10;
        }
        cout<<count<<endl;
       int n=
       power=1;
       while(n>0){
        if(n%10>0){
            number=(n%10)*power;
            cout<<number<<" ";
        }

        n=n/10;
        power=power*10;
       }
       cout<<endl;
        
    }
    
    return 0;

}

