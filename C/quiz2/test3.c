// ABCDE 70
// BCDEF 71
// CDEFG 72
// DEFGH 73
// EFGHI 74
#include<stdio.h>

int main() {

    int num,i,j,count=65;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(i=0; i<num; i++) {
        for(j=0; j<num; j++, count++) {
            if(count>90) {
                count=65;
            }
            printf("%c", count);
        }
        if(count>90) {
                count=65;
            }
        printf(" %d", count);
        count -= num-1;
        while(count <65) {
            count += 26;
        }
        printf("\n");
    }
    return 0;
}