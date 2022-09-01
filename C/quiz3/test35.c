#include<stdio.h>

int main() {

    int num, i, j;
    printf("Input number (2-6) : ");
    scanf("%d", &num);
    if(num>=2 && num<=6) {
        //for(i=num; i<num+4; i++) {
            for(j=1; j<=12; j++) {
                printf(" ");
                for(i=num; i<num+4; i++) {
                    printf("%d x %2d = %3d      ",i,j,i*j);
                }
                printf("\n");

            }
        //}
    }
    else {
        printf("Out of range !!!");
    }

    return 0;
}