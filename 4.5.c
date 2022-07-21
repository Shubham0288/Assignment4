// Write a program to print first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int n=1;
    printf("First 10 odd natural numbers in reverse order are :\n");
    for(int i=19 ; i>=n ; i=i-2)
    {
        printf("%d\n",i);
    }
    return 0;
}