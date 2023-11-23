#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str[200000];
    int sum=0;
    
    for (int i=0;i<n;i++){
        
           cin>>str[i];
           if(str[i]=="Tetrahedron"){
            sum+=4;

           }
           if(str[i]=="Cube"){
            sum+=6;

           }
           if(str[i]=="Octahedron"){
            sum+=8;

           }
           if(str[i]=="Dodecahedron"){
            sum+=12;

           }
           if(str[i]=="Icosahedron"){
            sum+=20;

           }

        

    }
    cout<<sum<<endl; 
        
    
    return 0;
}
