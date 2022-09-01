#include<stdio.h>

int main() {

    char input[8];
    int i,count=0;
    printf("Input 8 bits binary number : ");
    scanf("%08s",&input);
    for(i=0; input[i]!='\0'; i++) {
        if(input[i] == '1' || input[i] == '0') {
            count++;
        }
    }
    //printf("%d %d ",count,i);
    if(count >= i-1) {
printf("Your input %s is the binary number",input);
    }
    else {
        printf("Your input is not the binary number");
    }
    


    return 0;
}