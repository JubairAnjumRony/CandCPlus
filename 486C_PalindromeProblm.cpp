// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// int min_moves_to_palindrome(int n, int p, string s) {
//     // Adjust pointer position if it's in the second half
//     if (p > n / 2) {
//         reverse(s.begin(), s.end());
//         p = n - p + 1;
//     }

//     // Convert to 0-based index
//     p--;
//     int total_cost = 0;
//     vector<int> mismatches;

//     // Step 1: Identify mismatched pairs
//     for (int i = 0; i < n / 2; i++) {
//         if (s[i] != s[n - i - 1]) {
//             mismatches.push_back(i);
//         }
//     }

//     // If no mismatches, it's already a palindrome
//     if (mismatches.empty()) {
//         return 0;
//     }

//     // Step 2: Calculate character change cost
//     for (int i : mismatches) {
//         int char1 = s[i] - 'a';
//         int char2 = s[n - i - 1] - 'a';
//         int diff = abs(char1 - char2);
//         total_cost += min(diff, 26 - diff);
//     }

//     // Step 3: Calculate pointer movement cost
//     int left = mismatches[0];  // Smallest index after p
//     int right = mismatches.back();  // Largest index before p

//     // Case 1: Move from p to left, then to right
//     int cost1 = abs(p - left) + (right - left);
//     // Case 2: Move from p to right, then to left
//     int cost2 = abs(p - right) + (right - left);

//     // Add the minimum movement cost to the total cost
//     total_cost += min(cost1, cost2);

//     return total_cost;
// }

// int main() {
//     int n, p;
//     cin >> n >> p;
//     string s;
//     cin >> s;
//     cout << min_moves_to_palindrome(n, p, s) << endl;
//     return 0;
// }


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int min_moves_to_palindrome(int n, int p, string s){

    if(p>n/2){
      reverse(s.begin(),s.end());
      p = n-p+1;
    }
    
    p--;   //initialize to cursor index 0;
    int totalCount = 0;
    vector<int>notMatched;
    
    for (int i = 0;i<n/2; i++){
        if(s[i] != s[n-i-1]){
        notMatched.push_back(i);
        }
        
        }
        if(notMatched.empty()){
            return 0;
            }


  
    
    // calculate number of moves required
    for(int i: notMatched){
        int char1 = (s[i]-'a');
        int char2 = (s[n-i-1]-'a');
        int diff = abs(char1-char2);
        totalCount = totalCount+min(diff,26-diff);
    }
    
    // no  of moves required from the cursor
    int left =  notMatched[0];
    int right = notMatched.back();
    
    int count1 = abs(p-left)+(right-left);
    int count2 = abs(p-right)+(right-left);
    
    totalCount = totalCount + min(count1,count2);
    
    return totalCount;
}


int main(){
    int n;
    int p;
    cin>>n>>p;
    string s;
    cin>>s;
    int result = min_moves_to_palindrome(n,p,s);
    cout<<result<<endl;
    return 0;
}