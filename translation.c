#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    gets(s);
    char t[1000];
    gets(t);
    int flag=0;
    int l=strlen(s);
  
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==t[l-i-1]){
          flag++; 
        
      
    }
    else{
    flag=0;
    break;
    }
}
  if(flag==0)
   printf("NO\n");
    else
   printf("YES\n");
return 0;

}
