#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define fr(i,n) for(int i=0; i<(n); i++)
#define dbg(var) cout << #var << "=" << var << " "
#define nl cout << "\n"
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define mne(v) *min_element(v.begin(), v.end())
#define mxe(v) *max_element(v.begin(), v.end())
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())))
#define bin(x,y) bitset<y>(x)

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++) cin>>arr[i];

   sort(arr,arr+n,greater<int>());
//    int maxDuplicate = 0;
//    int lastDuplicate = 0;
   int maxCount = 0;
 
   int maxVal = 0;
   int val = 0;
  

     cout<<arr[0]<<endl;
   
  
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}