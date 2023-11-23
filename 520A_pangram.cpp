#include<cctype>
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string str[n];
    cin>>str[n];
    
     int i;
     int count=0,check;
     for(int i=0;i<n;i++){
     check =isalpha(str[i]);

     if(check)
     ++count;
        
     }
     if(count>=27){
        cout<<"YES";
     }
     else
     cout<<"NO";
    
     
  return 0;
    


}