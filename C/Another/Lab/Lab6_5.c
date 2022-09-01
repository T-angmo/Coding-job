// yiegfbjknfld
// f
// There is/are 2 "f" in the above sentences.
// Position: 5, 10
#include<stdio.h>

int main() {

    char input[300];
    char a;
    int position[20], count=0, i, j=0;
    printf("Enter string : ");
    gets(input);
    printf("Enter char : ");
    scanf("%c", &a);
    for (i = 0; input[i] != '\0'; i++) {
        if(input[i] == a || input[i] == a-32 || input[i] == a+32) {
            position[count] = i+1;
            count++;
        }
    }
    if(count > 0) {
        printf("There is/are %d \"%c\" in the above sentences.", count, a);
        printf("\nPosition: %d", position[0]);
        for(i=1; i<count; i++) {
            printf(", %d", position[i]);
        }
    }
    else {
        printf("Not found.");
    }

    return 0;
}