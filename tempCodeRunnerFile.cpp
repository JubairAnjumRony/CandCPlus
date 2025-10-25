#include <iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> r;
        vector<int> arr(n);
        for(int i = 0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        unordered_map<int,int> freq;
        int maxi =0;
        int count =0;
        for(auto num: arr){
          freq[num]++;  
          
        }
        auto last_unique = unique(arr.begin(),arr.end());
        // r.(last_unique,arr.end());
       for(auto num:freq){
         if(num.second>maxi) {
            maxi = num.second;
         }

       }

       set<int> unique_elements;
       for(int num: arr){
        unique_elements.insert(num);
       }
       int len = unique_elements.size();
        if(len == maxi){
            cout<<(len-1)<<endl;
        }
        else if(len>maxi){
           cout<<min(len-1,maxi)<<endl;
        }
        else{
            cout<<min(len,maxi-1); 
        }
    
    }
    return 0;
}