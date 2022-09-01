#include<stdio.h>

int main() {

    int n,i,j,temp=0;
    printf("Enter inputs : ");
    scanf("%d",&n);
    if(n>2 && n<=5) {
        int X[n][n];
        
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                temp += 11;
                X[i][j] = temp;
                //X[0][0]=5;
            }
        }
        printf("X =\n");
        for(i=0; i<n; i++) {
            printf("[");
            for(j=0; j<n; j++) {
                printf("\t%d",X[i][j]);
            }
            printf("]\n");
        }
        printf("X[0][2] = %d",X[0][2]);
    }
    else {
        printf("Out of range");
    }

    return 0;
}