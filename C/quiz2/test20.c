
//     1    2    3    4    5
//     6    7    8    9   10
//    11   12   13   14   15
//    16   17   18   19   20
//    21   22   23   24   25
#include<stdio.h>

int main() {

    int num,i,j,count=1;
    printf("input : ");
    scanf("%d", &num);
    printf("\n");
    if(num>0 && num<=20) {
        for(i=0; i<num; i++) {
            for(j=0; j<num; j++,count++) {
                printf("%5d", count);
                
            }
            printf("\n");
        }
    }

    return 0;
}