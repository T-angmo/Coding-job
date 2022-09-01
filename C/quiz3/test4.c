#include<stdio.h>

int main() {

    int input[10],i,j,count=0;
    printf("* Frequency of negative number change to positive number *\n");
    printf("Enter numbers : ");
    for(i=0; i<10; i++) {
        scanf("%d",&input[i]);
    }
    for(i=0; i<10-1; i++) {
        if(input[i]<0 && input[i+1]>0) {
            count++;
        }
    }
    printf("negative to positive frequency = %d",count);

    return 0;
}