#include<stdio.h>   //min -> max

int main() {

    int num[10], i, j, temp=0;
    printf(" *** Ascending sort ***\n");
    printf("Enter 10 whole numbers : ");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }
    for(i=0; i<10-1; i++) {
        for(j=i+1; j<10; j++) {
            if(num[i]>num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("Output : ");
    for(i=0; i<10; i++) {
        printf("%d ", num[i]);
    }


    return 0;
}