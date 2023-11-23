#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char s[1000];
    gets(s);
    for(int i=0;i<='\0';i++){
    if (i==0)
    {
        s[i]=toupper(s[i]);
    }
    }
    printf("%s\n",s);
    return 0;

}