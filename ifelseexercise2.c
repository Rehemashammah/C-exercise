#include<stdio.h>
int main()
{
    //Program to find the maximum number between three numbers
    int x,y,z;
    printf("Enter three numbers:");
    scanf("%d%d%d", &x, &y, &z);
    if ((x>y) && (x>z))
    {
        printf("%d is greater", x);

    }
    else if((y>z) && (y>x))
    {
        printf("%d is greater",y);
    }
    else
    {
        printf("%d is greater",z);
    }
    return 0;
}
