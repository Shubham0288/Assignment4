// Write a program to print 10 odd natural numbers.
#include<stdio.h>
int main()
{
    int n=20;
    printf("First 10 odd natural numbers are : \n");
    for(int i=1 ; i<=n ; i=i+2)
    {
        printf("%d\n",i);
        
    }
    return 0;
}