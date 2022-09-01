#include<stdio.h>

int main() {

    int num,i,j,count=0;
    printf("Input number : ");
    scanf("%d",&num);
    if(num<=100 && num>0) {
        for(j=2; j<num; j++) {
            count=0;
            for(i=1; i<=j; i++) {
                if(j%i == 0) {
                    count++;
                }
            }
            //printf("%d\n",count);
            if(count == 2) {
                printf("%2d is prime\n",j);
            }
        }
    }
    else {
      printf("Out of range !!!");  
    }
    
    
    

    return 0;
}