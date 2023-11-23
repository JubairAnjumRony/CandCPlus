#include <stdio.h>
int power(int x, int n);
int main()
{
    int a=2, b=3;
    printf("%d", power(4,1));
    return 0;
}
int power(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return x;
    }
    else
    {
        int o=1;
        for(int i=1; i<=n; ++i)
        {
            o=o*x;
        }
        return o;
    }

}