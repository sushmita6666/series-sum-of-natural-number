#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the N number of the series:");
    scanf("%d",&n);
    long int sum = 0;
    for(i=0;i<=n;i++){
    sum = sum+i;
    }
    printf("The sum of the series of %d is %ld",n,sum);
    return 0;
}

