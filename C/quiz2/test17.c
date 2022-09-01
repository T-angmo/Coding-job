#include<stdio.h>

int main() {

    int num[4],i,j,temp;
    float a,b;
    printf(" *** Find Max+Min and Max/Min ***\n");
    printf("Enter 4 integers : ");
    for(i=0; i<4; i++) {
        scanf("%d", &num[i]);
    }
    for(i=0; i<3; i++) {
        for(j=i+1; j<4; j++) {
            if(num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    printf("Max + Min = %d + %d = %d", num[3],num[0],num[3]+num[0]);
    printf("\nMax / Min = %d / %d = %d", num[3],num[0],num[3]/num[0]);
    a=num[3],b=num[0];
    printf("\nMax / Min = %d / %d = %.3f", num[3],num[0],a/b);

    return 0;
}