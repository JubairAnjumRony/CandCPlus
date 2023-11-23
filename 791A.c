#include<stdio.h>
#include<math.h>
int main(){
    int l,b;
    int y=0;
    scanf("%d%d",&l,&b);
   for(y=1;;y++){
    l=3*l;
    b=2*b;
    
     
    if(l>b){
        printf("%d",y);
        break;
    }
      

    }return 0;
}