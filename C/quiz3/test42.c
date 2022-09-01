#include<stdio.h>

int main() {

    int num,n,i,j,temp,check=0;
    printf("Enter number : ");
    scanf("%d",&num);
    n=num;
    while(n != 0) {
        temp = n%10;
        n=n/10;
        if(num%temp == 0) {
            check=1;
        }
        else {
             check=0;
            break;
        }
    }
    if(check==1) {
        printf("%d is self dividing number.",num);
    }
    else {
        printf("%d is not self dividing number.",num);
    }

    return 0;
}