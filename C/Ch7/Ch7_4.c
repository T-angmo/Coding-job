#include<stdio.h>

int main() {

    char input[100], i;
    printf("Enter a string : ");
    scanf("%[^\n]", &input);
    
    for(i=0; input[i] != '\0'; i++) {
        if(input[i] >= 'a' && input[i] <= 'z'){
            input[i] -= 32; 
        }
    }
    printf("Capital : %s", input);
    
    for(i=0; input[i] != '\0'; i++) {
        if(input[i] >= 'A' && input[i] <= 'Z'){
            input[i] += 32; 
        }
    }
    printf("\nSmall : %s", input);

    input[0] -= 32;
    for(i=1; input[i] != '\0'; i++) {
        if(input[i] == ' ') {
            if(input[i+1] >= 'a' && input[i+1] <= 'z'){
                input[i+1] -= 32;
            }
        }
        
    }
    printf("\nTitle : %s", input);

    return 0;
}