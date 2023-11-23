#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    int l = strlen(s1);
    printf("%d\n",l);
    for(int i=0;i<l;i++)
    {
        if(s1[i]<=90)
        {
            s1[i]+=32;
        }if(s2[i]<=90)
         {
            s2[i]+=32;
         }
    }
      
        for(int i=0;i<l;i++)
        { 
           
        if(s1[i]>s2[i])
        {
            printf("1");
            break;
        } 
             if(s1[i]<s2[i])
             {
              printf("-1");
              break;
             }

        
        }
       
    
    return 0;

}