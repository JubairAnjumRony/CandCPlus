#include<stdio.h>
#include<math.h>
int main(){
    int p,v,t,n;
    scanf("%d",&n);
    int count=0;
    for(int i =1;i<=n;i++){
        scanf("%d%d%d",&p,&v,&t);
    
   
    if(p+v+t>=2){
        count++;
    }
   }
   printf("%d",count);
    

}