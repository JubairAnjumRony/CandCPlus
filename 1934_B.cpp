#include <iostream>
using namespace std;

int minCoins(int coins[], int value) {
    int count = 0;
    for (int i =  5- 1; i >= 0; i--) {
        count += value / coins[i];
        value %= coins[i];
    }
    return count;
}

int main() {
    long long int t;
    cin>>t;
    while(t--){
    int coins[] = {1, 3, 6, 10, 15};
    //int n = sizeof(coins) / sizeof(coins[0]);

    int value;
    cout << "Enter a value: ";
    cin >> value;

    int result = minCoins(coins,value);
    cout << "Minimum number of coins needed: " << result << endl;

    }
    return 0;
}
