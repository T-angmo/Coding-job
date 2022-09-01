#include<stdio.h>

int main() {

    int n1,n2,i,count;
    printf("Input two numbers : ");
    scanf("%d %d",&n1,&n2);
    if(n1<=24 && n1 >=0 && n2<=59 && n2>=0) {
        count = n1*60 + n2;
        for(i=0; i<count; i++) {
            printf("*");
        }
    }
    else {
        printf("It's cannot calculation");
    }

    return 0;
}