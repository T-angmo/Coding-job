#include<stdio.h>

int main() {

    int n,i=0,j,digit,sum=11;
    char m[10];
    printf(" *** Summation of each digit into one digit ***\n");
    printf("Enter a positive number : ");
    scanf("%d",&n);
    printf("%d",n);
    while(sum > 10) {
        
        printf(" =");
        i=0,sum=1;
        while(n != 0) {
            digit = n%10;
            sum = sum*digit;
            //printf(" %d ",sum);
            m[i] = digit;
            n = n/10;
            i++;
        }
        printf(" %d ",m[i-1]);
        for(j=i-2; j>=0; j--) {
             printf("*");
            printf(" %d ",m[j]);
           
        }
        
        n=sum;
        printf("=> %d",sum);
    }
    
    

    return 0;
}