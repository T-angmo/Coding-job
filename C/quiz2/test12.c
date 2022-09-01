#include<stdio.h>

int main() {

    char input[100];
    int i, count=0;
    printf(" *** ASCII string display ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]", &input);
    printf("Output : ");
    for(; input[count] != '.'; count++);
    printf("[");
    printf("|%d %c %x|", input[count-1], input[count-1],input[count-1]);
    for(i=count-2; i>=0; i--) {
        printf(",|%d %c %x|", input[i], input[i], input[i]);
    }
    printf("]");

    return 0;
}