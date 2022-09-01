#include<stdio.h>

int main() {

    int num[3],i;
    printf("Enter first,second,third numbers : ");
    scanf("%d,%d,%d", &num[0],&num[1],&num[2]);
    
    for(i=1; i<3; i++) {
        if(num[0]>num[i]) {
            num[0] = num[i];
        }
    }
    printf("\nThe minimum number is %d",num[0]);
    return 0;
}