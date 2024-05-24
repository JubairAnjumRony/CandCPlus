#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       
        int max;
        int ans;
        for(int i=2;i<=n;i++){
        int ans=__gcd(2,i);
        cout<<ans<<endl;
           
        }
        
        // for(int i=1;i<=n;i++){
        //   cout<<ans<<endl;
        // }
        
        //   if(ans==max){
        //     cout<<ans<<endl;
        //   }
        // cout<<max<<endl;
    }
    return 0;
}