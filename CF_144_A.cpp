#include <bits/stdc++.h>
using namespace std;

#define int long long
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



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
   int heights[T];
   for(int i =0;i<T;i++){
    cin>>heights[i];
   }
      
   int count ;
   int max  = 0;
   int min = 0;
   for(int i = 0;i<T;i++){
         if(heights[i]>heights[max]){
            max = i;
         }
         if(heights[i]<=heights[min]){
            min = i;
         }
   }
   count = (max-0)+ ((T-1)-(min));
   if(max>min){
    count--;
   }
   cout<<count<<endl;

   return 0;
}