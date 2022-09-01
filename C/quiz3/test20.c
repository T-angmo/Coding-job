/*12345
23451
34512
45123
51234*/
#include<stdio.h>

int main() {

    int n,i,j,count,m[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("Enter : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        for(j=i-1,count=0; count<n; j++,count++) {
            while(j>=n) {
                j=0;
            }
            printf("%d",m[j]);
        }
        printf("\n");
    }
    return 0;
}