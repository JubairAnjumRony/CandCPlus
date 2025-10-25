#include<bits/stdc++.h>
using namespace std;

int main (){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i =0;i<n;i++){
          cin>>a[i];
        }
        int mx = *max_element(a.begin(),a.end());
        int mn = *min_element(a.begin(),a.end());


          if(mx == mn){
            cout<<"No\n";
            continue;
          }

          cout<<"Yes\n";
          for(int i =0; i<n;i++)
      {    int label = (a[i] == mx)? 2:1;
          cout<<label<<(i== n-1?'\n':' ');
        //   if(i == n-1){
        //     cout<<'\n';
        //   }
        //   else
        //  { cout<<' ';
        //    }
        }
                

               
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for(int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         int mx = *max_element(a.begin(), a.end());
//         int mn = *min_element(a.begin(), a.end());

//         if(mx == mn) {
//             cout << "No\n";
//             continue;
//         }
//         cout << "Yes\n";
//         bool mx_found = false;
//         for(int i = 0; i < n; i++) {
//             if(a[i] == mx && !mx_found) {
//                 cout << 2;
//                 mx_found = true;
//             } else {
//                 cout << 1;
//             }
//             if(i != n-1) cout << ' ';
//         }
//         cout << '\n';
//     }
//     return 0;
// }