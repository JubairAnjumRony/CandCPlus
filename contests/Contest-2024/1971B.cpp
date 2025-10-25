#include<bits/stdc++.h>
using namespace std;
   
int main()
{ 	



  int t;
 cin>>t;
   while(t--){

  string s;
  cin>>s;
  bool count=true;
  
  for(int i=0;i<s.size()-1;i++){
      
       if(s[i]!=s[i+1]){
       	swap(s[i],s[i+1]);


       	cout<<"YES"<<endl;

       	cout<<s<<endl;
       	count=false;
       	break;
       }
  }

        if(count){
        	cout<<"NO"<<endl;
        }

        
       
   }
 
	return 0;
 }
