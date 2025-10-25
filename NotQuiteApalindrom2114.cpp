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
    int n;cin>>n;
    int k; cin>>k;
 int zeros = 0; int ones=0;
 for(int i=0;i<n; i++){
    char s;
    cin>>s;
    if(s == '0'){
       zeros++;

    }
    else
    ones++;
 }
   int up = (n-2*k)/2;
   if(zeros >= up && ones >= up && (zeros-up)%2==0 && (ones-up)%2==0 ){
    cout<<"YES"<<endl;
 }
 else{
    cout<<"NO"<<endl;
 }

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