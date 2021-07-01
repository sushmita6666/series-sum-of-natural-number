#include<stdio.h>
int main()
{
    int n;
    long int sum;
    printf("Enter the N the number of the series:");
    scanf("%d", &n);
    sum = (n*(n+1))/2;
    printf("The Series sum of the %d is %ld", n,sum);

    return 0;
}
