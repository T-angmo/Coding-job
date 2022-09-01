/*Enter numbers : 1 2 3 4 5 6 7 8 9 10
6
7
8
9*/
#include<stdio.h>

int main() {

    int input[10],i,j;
    printf("Enter numbers : ");
    for(i=0; i<10; i++) {
        scanf("%d",&input[i]);
    }
    for(i=0; i<10-1; i++) {
        if(input[i] > 5) {
            printf("%d\n",input[i]);
        }
    }

    return 0;
}