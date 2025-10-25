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
const int INF = 1e18;

void solve() {
        int n;
    cin >> n;

    // min_time[mask] stores minimum time for mask 0 to 3
    vector<int> min_time(4, INF);

    for (int i = 0; i < n; i++) {
        int m;
        string s;
        cin >> m >> s;

        int mask = 0;
        if (s[0] == '1') mask |= 1;
        if (s[1] == '1') mask |= 2;

        min_time[mask] = min(min_time[mask], m);
    }

    int res = min(min_time[3], min_time[1] + min_time[2]);
    if (res >= INF)
        cout << -1 << '\n';
    else
        cout << res << '\n';

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