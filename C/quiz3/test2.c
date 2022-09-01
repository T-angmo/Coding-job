#include<stdio.h>

int main() {

    int n[3],i,max,min;
    printf("Enter inputs : ");
    for(i=0; i<3; i++) {
        scanf("%d",&n[i]);
    }
    max=n[0],min=n[0];
    for(i=1; i<3; i++) {
        if(n[i]>max) {
            max = n[i];
        }
        if(n[i]<min) {
            min = n[i];
        }


    }
    printf("The maximum number is %d",max);
    printf("\nThe minimum number is %d",min);

    return 0;
}