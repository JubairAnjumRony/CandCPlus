#include <stdio.h>
int main()
{
    int n, i, count=0, arr[200]={0};
    scanf("%d", &n);
    int p,q;
    scanf("%d", &p);
    for(i=0;i<p;i++)
    {
       scanf("%d", &arr[i]);
    }
    scanf("%d", &q);
    for(i=p; i<(p+q); i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<(p+q); i++)
    {
        for(int j=0; j<(p+q)-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0; i<(p+q);i++)
    {
        if(arr[i]!=arr[i+1])
        count++;
    }
 
    if(count==n)
    {
        printf("I become the guy.");
    }
    else
    printf("Oh, my keyboard!");
    return 0;
}