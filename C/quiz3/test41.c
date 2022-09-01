#include<stdio.h>

int main() {

    int n,i,j;
    printf("Enter inputs : ");
    scanf("%d", &n);
    if(n%2 == 0) {
        printf("Product ID : A001\nProduct Price : 20.50");
    }
    else {
        printf("Product ID : A002\nProduct Price : 30.00");
    }

    return 0;
}