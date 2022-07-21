//Write a program to print cubes of the first 10 natural numbers.
#include<stdio.h>
int main()
{
    int n=10;
    printf("The cubes of the first 10 natural numbers \n");
    for(int i=1 ; i<=n ; i++)
    {
        printf("%d\n",i*i*i);
    }
    return 0;
}