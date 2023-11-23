#include<iostream>
using namespace std;

int main(){
   long int n;
   cin>>n;
   long int b,c,d,e,f,m;
  
   b=n/100;
   m=n%100;
   c=m/20;
   m=m%20;
   d=m/10;
   m=m%10;
   e=m/5;
   m=m%5;
   f=m;
   cout<<b+c+d+e+f;

    return 0;
}