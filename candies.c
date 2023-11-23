#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        long long int n;
        scanf("%lld",&n);
       if(n%2==0)
       printf("%lld\n",n/2-1);
       else
       printf("%lld\n",n/2);
     
       t--;

    }
      return 0;
}