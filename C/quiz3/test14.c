/*ABCDE
BCDEA
CDEAB
DEABC
EABCD*/
#include<stdio.h>

int main() {

    int n,i,j,count;
    char m[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Enter : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        for(j=i-1,count=0; count<n; j++,count++) {
            while(j>=n) {
                j=0;
            }
            printf("%c",m[j]);
        }
        printf("\n");
    }
    return 0;
}