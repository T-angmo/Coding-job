#include<stdio.h>
#include<stdlib.h>

int main() {

    char n[100];
    int i,flag=0,sum=1;
    printf("Input the number : ");
    scanf("%s",&n);
    for ( i = 0; n[i] != 0; i++) {
    //if decimal "." is fount, it means it is float
        if (n[i] == '.') {
            flag = 1;
            break;
        }
    }
    if (flag==0) {
        for(i=1; i<=atoi(n);i++) {
            sum = sum*i;
            //printf("%d,%d  ",sum,i);
        }
       printf("The factorial of %s is %d", n,sum);
    }
    else {
       printf("%.2f can not calculation the factorial", atof(n));
    }
    return 0;
}