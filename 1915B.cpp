#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char a[3][3];
        char replace_char;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
            for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
                
            
               if(a[i][j]=='?'){
                for(char ch='A';ch<='C';ch++){
                    bool found=false;
                    for(int i=0;i<3;i++){
                        if(a[i][0]==ch &&a[i][1]==ch;a[i][2]==ch){
                            found=true;
                            break;
                        }
                        if(a[0][i]==ch && a[i][1]==ch && a[i][2]==ch){
                            found=true;
                            break;
                        }
                        if(!found){
                            replace_char=ch;
                        }
                    }
                }
             }
            }
        
    }
    cout<<replace_char<<endl;
}
    return 0;
}