#include<stdio.h>
int main(){
    int n,h,f;
    int d=0,s=0;
    scanf("%d%d",&n,&h);
    for(int i=0;i<n;i++){
        scanf("%d",&f);
        if(f>h)
        
            d++;
            else
            s++;
        
    }
    d=2*d;
    s=1*s;
    int r=(d+s);
    printf("%d\n",r);
    return 0;
}