#include<stdio.h>
#include<math.h>
int main()
{
   long int n;
   int k,r;
    scanf("%ld%d",&n,&k);
    for(int i=0;i<k;i++){
        if(n%10==0){
         n=n/10;
        }
         else
       n--;
    } 
    printf("%d\n",n);
    return 0;
}