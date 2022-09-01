#include<stdio.h>

int main() {

    int input[10],i,j;
    printf("* find two cosecutive number added to ten  *\n");
    printf("Enter numbers : ");
    for(i=0; i<10; i++) {
        scanf("%d",&input[i]);
    }
    for(i=0; i<10-1; i++) {
        if(input[i]+input[i+1] == 10) {
            printf("%d + %d = 10 at %d %d\n",input[i],input[i+1],i+1,i+2);
        }
    }

    return 0;
}