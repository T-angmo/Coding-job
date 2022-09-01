#include<stdio.h>

int main() {

    int num1, num2,i;
    printf("Input two numbers : ");
    scanf("%d %d",&num1, &num2);
    if(num1>0 && num1<24 && num2>0 &&num2 <60) {
        for(i=1; i<=num1; i++) {
            printf("%2d. This time is %02d:%02d\n",i,num1,num2);
        }
    }
    else if(num1==0) {}
    else {
        printf("It's cannot show the clock.");
    }
    
    return 0;
}