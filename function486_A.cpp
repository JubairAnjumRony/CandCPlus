#include<iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    int result = 0;

    for (int i = 1, sign = -1; i <= n; i++, sign = -sign) {
        result += sign * i;
    }

    cout << result << endl;
    return 0;
}