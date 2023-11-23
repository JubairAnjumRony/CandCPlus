#include<stdio.h>
#include<math.h>
int main(){
  int t;
  scanf("%d",&t);
    
    while(t>0){
      
      int a, b;
    
    
        scanf("%d%d",&a,&b);
        if(a%b==0){
          printf("0\n");
        }
    
    
    
       
      if(a%b!=0){
     
       int s=(b-(a%b));
       printf("%d\n",s);
     }
     


      t--;
    }
    return 0;
}