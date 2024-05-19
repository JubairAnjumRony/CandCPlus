#include<bits/stdc++.h>
using namespace std;
   
int main()
{ 	
 
 
    //  #ifndef ONLINE_JUDGE
	// freopen("inputf.in","r",stdin);
	// freopen("outputf.in","w",stdout);
	// #endif
 
  int t;
   cin>>t;
   while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b){
    	int temp=a;
        a=b;
        b=temp;
    }
 
    if(c>d){
    	int temp=c;
    	c=d;
    	d=temp;
       
 
 }
   if((c>a && b>c)&&(d<a ||d>b)){
   	cout<<"YES"<<endl;
 
   }else if((a<d && d<b)&&(c<a ||c>b)){
   	cout<<"YES"<<endl;
   }
   
   else
   {
    cout<<"NO"<<endl;
   }
   }
 
	return 0;
 
    }