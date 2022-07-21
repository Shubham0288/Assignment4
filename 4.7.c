// Write a program to print the first 10 even natural numbers in reverse order .
#include<stdio.h>
int main()
{
    int n=1;
    printf("The first 10 even natural numbers in reverse order are\n");
    for(int i=20 ; i>=n ; i=i-2)
    {
        printf("%d\n",i);
    }
    return 0;
}