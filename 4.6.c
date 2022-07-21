// Write a program to print the first 10 even natural numbers .
#include<stdio.h>
int main()
{
    int n=20;
    printf("First 10 even natural numbers are\n:");
    for(int i=2 ; i<=n ; i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}