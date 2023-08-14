#include<stdio.h>
int main()
{
    //Program to find whether a number is even or not
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if (x%2==0)
    {
        printf("%d is an even number",x);
    }
    else if (!(x%2==0))
    {
        printf("%d is an odd number",x);
    }
    else
    {
        printf("An error occured");
    }
    return 0;
}
