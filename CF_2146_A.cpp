#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Count frequencies
        vector<int> freq;
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) cnt++;
            else {
                freq.push_back(cnt);
                cnt = 1;
            }
        }
        freq.push_back(cnt);

        int maxFreq = *max_element(freq.begin(), freq.end());
        int ans = 0;

        // Try each possible "balanced frequency"
        for (int k = 1; k <= maxFreq; k++) {
            int length = 0;
            for (int f : freq) {
                length += min(f, k);
            }
            ans = max(ans, length);
        }

        cout << ans << "\n";
    }
    return 0;
}
