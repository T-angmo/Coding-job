#include<stdio.h>

int main() {

    char input[10];
    int i,j, count1=0, count2=0,count3=0;
    printf("Input 10 characters of string : ");
    scanf("%[^\n]",&input);
    for(i=0; i<10; i++) {
        if(input[i]>='0' && input[i]<='9') {
            count1++;
        }
        else if((input[i] >= 'A' && input[i] <= 'Z') ||  (input[i] >= 'a' && input[i] <= 'z')) {
            count2++;
        }
        else if(input[i]==' ') {
            count3++;
        }
        else {
            count3++;
        }
        //printf("%d %d %d\n",count1,count2,count3);
    }
    printf("Number = %d",count1);
    printf("\nAlphabetic character = %d",count2);
    printf("\nOther character : %d",count3);

    return 0;
}