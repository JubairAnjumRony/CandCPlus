#include<iostream>
#include<math.h>
using namespace std;
using lli=long long int;
bool is_composite(lli n){
    if(n<=2)
    return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return true;
    }
    return false;
}
int main(){
   lli n;
   cin>>n;
   lli a,b;
   for(int i=4;i<n;i++){
   if(is_composite(i) && is_composite(n-i)){
     a=i;
     b=n-i;
     break;
   }
   }
   
   cout<<a<<" "<<b;
   return 0;
}

