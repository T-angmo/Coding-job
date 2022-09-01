//make input to inverse
// useyedgjabednlkms
// smklndebajgdeyesu
#include<stdio.h>

int main() {

    char input[100];
    int i, count;
    printf("Enter string : ");
    gets(input);
    for(count=0; input[count] != '\0'; count++);
    for(i=count; i>=0; i--) {
        printf("%c", input[i]);
    }

    return 0;
}