#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s1;
    string s2;
    string s3;
    string s4;
    cin>>s1>>s2>>s3;
    s4=s1+s2;
    int l1=s1.length();
    int l2=s2.length();
    int l3=s3.length();
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    if(s3==s4){
        
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}