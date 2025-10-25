#include<iostream>
using namespace std;

int main(){
    string s = "aeabesfs";
    int char1 = s[0] -'a';
    int char2 = s[7] - 'a';
    int diff = abs(char1- char2);
    int result = min(diff,26-diff);
    cout<<result<<endl;
}