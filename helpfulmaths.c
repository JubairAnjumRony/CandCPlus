#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    for(int i=0;i<=l-1;++i){
        for(int j=0;j<l-i-1;++j)
        {    
            if(s[j]!='+'){
            if(s[j]>s[j+2]){
                char temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
            }

        }

    }
    //for(int i=0;i<l;i++){
        printf("%s",s);
    //}
    return 0;
}