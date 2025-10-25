// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string str = to_string(x);
//         int length = str.length();
//         for(int i = 0;i<length/2;i++){
//             if(str[i]!= str[length-i-1]){
//                 return false;
//             }
            
//         }
        
//                 return true;
            

        
//     }
     

 

// };

//   int main () {
//     Solution sol;
//         int number;
//         cin>>number;
//         bool result = sol.isPalindrome(number);
//         cout<<(result?"true": "false")<<endl;
//         return 0;
//     }
   

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cout << "Enter first binary number: ";
    cin >> a;
    cout << "Enter second binary number: ";
    cin >> b;

    // Convert binary string to integers
    bitset<64> num1(a);
    bitset<64> num2(b);

    // Add them
    bitset<32> sum(num1.to_ulong() + num2.to_ulong());

    cout << "Sum = " << sum << endl;
    return 0;
}
