#include<stdio.h>

int main() {

    int num,sum=0;
    printf(" *** Summation of each digit ***\n");
    printf("Enter a positive number : ");
    scanf("%d",&num);
    while (num!=0)
    {
        sum += num%10;
        num = num/10;
    }
    
    printf("\nSummation of each digit = %d",sum);

    return 0;
}