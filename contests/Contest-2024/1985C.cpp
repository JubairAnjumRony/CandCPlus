#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
    vector<long long  int> a(n);
        long long int prefixMax=-1;
        long long int sum=0;
        long long int count=0;
 for (int i = 0; i < n; i++) {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++) {
      
            prefixMax=max(prefixMax,a[i]);
            sum+=a[i];
            if(sum-prefixMax == prefixMax)
                count++;
            

            }

        
            cout<< count <<endl;


    }
     return 0;
}