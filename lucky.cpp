#include <iostream>
using namespace std;

int main() {
    long long int Number, Temp, Reminder;
    bool Flag = true;
    cin >> Number;
    Temp = Number;
    while (Temp > 0) {
        Reminder = Temp % 10;
        if (Reminder != 4 && Reminder != 7) {
            Flag = false;
            break;
        }
        Temp /= 10;
    }
    if (Flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}