#include<stdio.h>

int main() {

    char input[100], i;
    printf("Enter a string : ");
    scanf("%[^\n]",&input);
    printf("Capital : ");
    for(i=0; input[i] != '\0'; i++) {
        if(input[i] >= 'a' && input[i] <= 'z') {
            input[i] -= 32;
        }
        printf("%c", input[i]);
    }
    printf("\nSmall : ");
    for(i=0; input[i] != '\0'; i++) {
        if(input[i] >= 'A' && input[i] <= 'Z') {
            input[i] += 32;
        }
        printf("%c", input[i]);
    }

    return 0;
}