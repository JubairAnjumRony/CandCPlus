#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int digit=x%10;
        int count=0;
        while(x>0){
            x=x/10;
            count++;
        }
        if(count==1){
            cout<<((digit-1)*10)+1<<endl;
        }
           if(count==2){
            cout<<((digit-1)*10)+3<<endl;
        }
           if(count==3){
            cout<<((digit-1)*10)+6<<endl;
        }
           if(count==4){
            cout<<((digit-1)*10)+10<<endl;
        }

    }
    return 0;
}