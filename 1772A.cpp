// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a;
//         string s;
//         cin>>s;
//         cin>>b;
//         cout<<a+b<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// Function to evaluate a simple arithmetic expression
int evaluateExpression(string expression) {
    stringstream ss(expression);
    int result;
    ss >> result;
    char op;
    int num;
    
    while (ss >> op >> num) {
        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        } else if (op == '*') {
            result *= num;
        } else if (op == '/') {
            result /= num;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after reading t
    for (int i = 0; i < t; ++i) {
        string expression;
        getline(cin, expression);
        cout << evaluateExpression(expression) << endl;
    }
    return 0;
}