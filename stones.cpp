#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    char s[100];
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i-1]==s[i])
        {
            count++;
        }
        
    }
    
    cout<<count;
    return 0;
} 
