#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
   char s[100];
   gets(s);
   int l =strlen(s);
   int count=0;
   for(int i=0;s[i]!='\0';i++){
    if(s[i]==s[l-i-1]){
       count++;
    }
        else
        count=0;
        break;
       
    }
    if(count==0){
         printf("N");
    }
    else
     printf("p");
    return 0;
   }

