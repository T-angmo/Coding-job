#include<stdio.h>

int main() {

    int num[4],i,j,temp;
    float a,b, c;
    printf(" *** Find (Min + Mid) / Max ***\n");
    printf("Enter 3 integers : ");
    for(i=0; i<3; i++) {
        scanf("%d", &num[i]);
    }
    for(i=0; i<2; i++) {
        for(j=i+1; j<3; j++) {
            if(num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    a=num[0],b=num[1], c=num[2];
    printf("(Min + Mid) / Max = (%d + %d) / %d = %.3f", num[0],num[1],num[2],(a+b)/c);
    return 0;
}