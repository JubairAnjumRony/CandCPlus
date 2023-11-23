#include<stdio.h>
#include<math.h>
int main(){
    int i,j,r,c;
    int a[6][6];
    for(i=1;i<6;i++){
         
        for(j=1;j<6;j++){
           
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
                r=abs(3-i);
                c=abs(3-j);
                 printf("%d",r+c); 
               
         }
     }   
 }
 return 0;
}