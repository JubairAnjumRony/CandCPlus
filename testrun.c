#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    
    gets(s);
    int i,j,k;
    for(int i =0;s[i]!='\0';i++){
        for(j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j]){
                for(k=j;s[k]!='\0';k++){
                    s[k]=s[k+1];
                }
            }
        }
    }
    printf("After removing duplicates:");
    printf("%s",s);
    return 0;
}