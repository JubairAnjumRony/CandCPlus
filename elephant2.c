#include<stdio.h>
int main(){
    long int n,s;
    scanf("%ld",&n);
    s=n/5;
    if(n%5==0){
        printf("%ld\n",s);
    }else  
    {
     printf("%ld",s+1);
    }
    return 0;

}