#include<stdio.h>

int main() {

    char input[100];
    int i;
    printf(" *** ASCII string display ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]", &input);
    printf("Output : ");
    for(i=0; input[i] != '\0'; i++) {
        printf("|%d,%c| ", input[i], input[i]);
    }

    return 0;
}