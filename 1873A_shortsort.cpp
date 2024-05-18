// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int i=0;
//             if(s[i]!='a' &&s[i+1]!='b' &&s[i+2]=='c'){
//                 swap(s[i],s[i+1]);
//             }
//             else if(s[i]!='a' &&s[i+1]=='b' &&s[i+2]!='c'){
//                 swap(s[i],s[i+2]);
//             }
//             else 
//             swap(s[i+1],s[i+2]);
        
//     }
//     if (string s =='abc'){
//         cout<<"YES"<<endl;

//     }
//     else
//     cout<<"NO"<<endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        bool possible = false;
       
        for(int i = 0; i < n - 2; i++){
               if(s[i]!='a' &&s[i+1]!='b' &&s[i+2]=='c'){
                 swap(s[i],s[i+1]);
                 possible=true;
             }
             if(s[i]!='a' &&s[i+1]=='b' &&s[i+2]!='c'){
                 swap(s[i],s[i+2]);
                 possible=true;
           }
             if(s[i]=='a' &&s[i+1]!='b' &&s[i+2]!='c') {
             swap(s[i+1],s[i+2]);
             possible=true;
             }

              if(s[i]=='a' &&s[i+1]=='b' &&s[i+2]=='c') {
           
             possible=true;
             }
    }
               
            
        
        if (possible &&  s == "abc"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}