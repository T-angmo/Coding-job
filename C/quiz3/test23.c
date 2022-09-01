#include<stdio.h>

int main() {

    int num,i,j;
    printf(" *** Show isosceles triangle ***\n");
    printf("Enter a counting number : ");
    scanf("%d",&num);
    if(num>=3) {
        printf("Output : \n");
        for(i=0; i<num; i++) {
            for(j=i+1; j<num; j++) {
                printf(" ");
            }
            for(j=0; j<=i; j++) {
                printf("*");
            }
            for(j=1; j<=i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    else {
        printf(" --- Incorrect number. ---");
    }
    

    return 0;
}