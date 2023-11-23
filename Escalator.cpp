#include<bits\\stdc++.h>
using namespace std;
int main(){
    int t;
    int h;
    cin>>t;
    while(t--){
        int n,m,k,H;
        int count=0;
        cin>>n>>m>>k>>H;
        int h[n];
        for(int i=0;i<n;i++){
            cin>>h[i];
        
        for(int j=1;j<m;j++){
            if(abs(h[i]-H)==(j*k)){
                count++;
            }
        }
        }
        cout<<count<<endl;
        
    }
   

 return 0;
}