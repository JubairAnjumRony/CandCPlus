#include <iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> r;
//         vector<int> arr(n);
//         for(int i = 0;i<n;i++) cin>>arr[i];
//         sort(arr.begin(),arr.end());
//         unordered_map<int,int> freq;
//         int maxi =0;
  
//         for(auto num: arr){
//           freq[num]++;  
          
//         }
    
//        for(auto num:freq){
//          if(num.second>maxi) {
//             maxi = num.second;
//          }

//        }

//        set<int> unique_elements;
//        for(int num: arr){
//         unique_elements.insert(num);
//        }

        //   we can find the length of unique elements by int len = freq.size(); 
        // in map freq.size() holds the size of unique elements
//        int len = unique_elements.size();
//         if(len == maxi){
//             cout<<(len-1)<<endl;
//         }
//         else if(len>maxi){
//            cout<<min(len-1,maxi)<<endl;
//         }
//         else{
//             cout<<min(len,maxi-1)<<endl; 
//         }
    
//     }
//     return 0;
// }

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int mx = 0; int diff =0;
        sort(arr,arr+n);
        for(int i = 0;i<n;){
            int j =i,cnt = 0;
            while(j<n && arr[j] == arr[i]){
                j++;cnt++;
            }
            mx = max(mx,cnt);
            diff++;
            i=j;
        }
        if(mx == diff){
            cout<<mx-1<<endl;
        }
        else if(mx>diff){
            cout<<min(mx-1,diff)<<endl;
        }
        else 
        cout<<min(mx,diff-1)<<endl;
    }

    return 0;
}