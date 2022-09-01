#include<stdio.h>

int main() {

    int n1,n2,i,j,count=0,k=0,num[1000];
    printf(" *** Show prime number ***\n");
    printf("Enter 2 posittive numbers : ");
    scanf("%d %d",&n1,&n2);
    if(n2<n1) {
        count=n2;
        n2=n1;
        n1=count;
    }
        for(j=n1; j<=n2; j++) {
            count=0;
            for(i=1; i<=j; i++) {
                if(j%i == 0) {
                    count++;
                }
            }
            //printf("%d\n",count);
            if(count == 2) {
                num[k]=j;
                k++;
            }
        }
    printf("\nTotal prime numbers : %d\n\n",k);
    printf("Prime number(s) from %d to %d : ",n1,n2);
    for(i=0; i<k; i++) {
        printf("%d ",num[i]);
    }

    return 0;
}