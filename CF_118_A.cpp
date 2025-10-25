#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    for(auto i: s){
        i = tolower(i);
        if(!(i == 'a' || i =='e' || i =='i' || i =='o' || i =='u' || i =='y')){
         cout<<"."<<i;
        }
        
    }
    cout<<endl;
    return 0;
}

// int main(){
//     string s;
//     cin>>s;
//     string t(s.size(),'.');
//     transform(s.begin(),s.end(),t.begin()+3,::tolower);

//     cout<<t<<endl;
// }