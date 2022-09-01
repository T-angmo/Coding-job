#include<stdio.h>

int main() {

    int num,temp,sum,n,r;
    printf("Enter number: ");
    scanf("%d",&num);
    n=num;
    temp=n;    
    while(n>0) {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum) {
        printf("%d is palindrome.",num);   
    }    
    else {
        printf("%d is not palindrome.",num); 
    } 
     
    

    return 0;
}