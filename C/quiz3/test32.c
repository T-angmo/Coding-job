/*Input : 5
   1
   3   5
   7   9  11
  13  15  17  19
  21  23  25  27  29*/
#include<stdio.h>

int main() {

    int n,i,j,num=1;
    printf("Input : ");
    scanf("%d",&n);
    if(n>0) {
         for(i=1; i<=n; i++) {
            for(j=0; j<i; j++) {
                printf("%4d",num);
                num+=2;
            }
            printf("\n");
        }
    }
    else {
        printf("No Answer");
    }
   

    return 0;
}