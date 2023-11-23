#include<stdio.h>
int main(){
int i=0;
char c;
while((c=getchar())!='\n'){
if(c=='4' || c=='7')	
i++;
}
printf(i==4|i==7? "YES" : "NO");
}