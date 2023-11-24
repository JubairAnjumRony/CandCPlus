#include<iostream>
#include<math.h>
using namespace std;
int main(){

   int n,k;
   cin>>n>>k;
   int count=0;
   int timeremain=240-k;
   int l=0;
   for(int i=1;i<=n;i++){

      l=(l+5*i);
     if(timeremain>=l){
     count++;
     }

   } 
     cout<<count<<endl;
   return 0;      

}