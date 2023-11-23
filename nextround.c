#include<stdio.h>
int main(){
    int l,k;
    scanf("%d %d",&l,&k);
    int n[100];
    int count=0;
   
    for (int i = 1; i<=l; i++)
    {
         
    scanf("%d",&n[i]);
    }
    for(int i=1;i<=l;i++){
    if(n[i]>=n[k] &&n[i]!=0){
        count++;
    }
    

    }
    printf("\n%d",count);
    return 0;
    
    

}