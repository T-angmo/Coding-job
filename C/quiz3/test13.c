#include<stdio.h>

int main() {

    char input[100],i,j;
    printf("Enter a string : ");
    scanf("%[^\n]",&input);
    printf("Capital : ");
    for(i=0; input[i] != '\0'; i++) {
        if(input[i] == ' ') {
            printf("%c",input[i]);
        }
        if(input[i] < '0' || (input[i] > '9' && input[i] < 'A') || (input[i] > 'Z' && input[i] < 'a') || input[i] > 'z') {  //ถ้า pt1 เป็นอักษรพิเศษ ช่องว่าง (space)
            
        }
        else if(input[i] >= 'a' && input[i] <= 'z'){
            input[i] -= 32; 
            printf("%c",input[i]);
        }
        else {
            printf("%c",input[i]);
        }
    }
    printf("\nSmall : ");
    for(i=0; input[i] != '\0'; i++) {
        if(input[i] == ' ') {
            printf("%c",input[i]);
        }
        if(input[i] < '0' || (input[i] > '9' && input[i] < 'A') || (input[i] > 'Z' && input[i] < 'a') || input[i] > 'z') {  //ถ้า pt1 เป็นอักษรพิเศษ ช่องว่าง (space)
            
        }
        else if(input[i] >= 'A' && input[i] <= 'Z'){
            input[i] += 32; 
            printf("%c",input[i]);
        }
        else {
            printf("%c",input[i]);
        }
        
    }
    

    return 0;
}