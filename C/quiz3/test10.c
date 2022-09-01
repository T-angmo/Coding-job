#include<stdio.h>

int main() {

    char input[100];
    int i,a=0,r=0,y=0,count=0;
    printf("Enter the sentence : ");
    scanf("%[^\n]",&input);
    for(i=0; input[i] != '\0';i++) {
        if(input[i] == 'a') {
            a++;
        }
        if(input[i] == 'r') {
            r++;
        }
        if(input[i] == 'y') {
            y++;
        }
    }
    //printf("%d %d %d\n",a,r,y);
    if(a>=4 && r>= 4 && y>=2) {
        count=2;
    }
    else if(a>=2 && r>= 2 && y>=1) {
        count=1;
    }
    printf("The amount of \"array\" is %d.",count);

    return 0;
}