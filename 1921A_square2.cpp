#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x_max=INT_MIN,x_min=INT_MAX,y_min=INT_MAX;
    for(int i=0;i<4;i++){
        int x,y;
        cin>>x>>y;
        x_min=max(x_max,x);
        x_min=min(x_min,x);
    }
    long long ans=(x_max-x_min)*(x_max-x_min);
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
