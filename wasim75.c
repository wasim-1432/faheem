#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a&1)
    {
        printf("Odd number");
    }
    else
    {
        printf("Even number");
    }
    printf("\n");
    return 0;
}