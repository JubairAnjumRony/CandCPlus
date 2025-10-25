#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int count = 0;
    if(n == 1){
        cout<<0<<endl;
    }
    else if(n == 2){
        cout<<-1<<endl;
    }
    else if(n/6 >= 3 && n%6 ==0){
        n = n/6;
        count++;
    }
    else if(n%6 != 0 && n>2){
        n= n*2;
        count++;
    }
    else {
        cout<<-1<<endl;
    }
       



    cout<<count<<endl;

    }
    

    return 0;
}