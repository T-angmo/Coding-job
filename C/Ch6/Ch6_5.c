#include<stdio.h>

int main() {

    int x[100], y[100], count=0, check=0;
    float k, i, j;
    double m, n, k1;
    printf(" *** Solving equation 1/x + 1/y = 1/k ***\n");
    printf(" *** x, y and k are counting numbers. ***\n");
    printf("Enter k : ");
    scanf("%f", &k);
    k1 = k;
    //printf("%f %f %f %f\n",1/25.0,1/600.0,(1/25.0)+(1/600.0),1/24.0);
    if(k<=0) {
        printf(" ===> INVALID k <===");
    }
    else {
        for(i=1, m=1; i<=1000; i++,m++) {
            for(j=1, n=1; j<=1000; j++,n++) {
                //printf("   %f %f %f\n",1/i,1/j,1/k);
                if((1/i+1/j) == (1/k)) {
                    count++;
                    printf("%2d. 1/%.0f + 1/%.0f = 1/%.0f\n",count, i,j,k);
                    //printf("   %f %f %f",1/i,1/j,1/k);
                    //printf("   aaa\n");
                }
                else if((1/m+1/n) == (1/k1)) {
                    count++;
                    printf("%2d. 1/%.0f + 1/%.0f = 1/%.0f\n",count, m,n,k);
                }
            }
        }
        printf("There are %d solutions.",count);
    }

    return 0;
}