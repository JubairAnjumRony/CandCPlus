#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
    int t;
    cin>>t;
    while(t--){
        Faster;
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        int count=0;
        
      vector<ll> dx={-a,-a,a,a,b,b,-b,-b};
      vector<ll> dy={-b,b,b,-b,a,-a,a,-a};
 
      set<pair<ll,ll>> dexK;
      set<pair<ll,ll>> dexQ;
 
      for(int i=0;i<8;i++){
         dexK.insert({xk+dx[i],yk+dy[i]});
      }
      for(int i=0;i<8;i++){
         dexQ.insert({xq+dx[i],yq+dy[i]});
      }
 
      int ans=0;
 
      for(auto i:dexK){
         if(dexQ.find(i)!=dexQ.end()){
            ans++;
         }
      }
 
      cout<<ans<<endl;
    }
    return 0;
}