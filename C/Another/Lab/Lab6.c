#include<stdio.h>
#include <string.h>

int main() {

    char abc[] = {'A','I','W','G','Z','V','F','U','T','H','S','O','J','L','K','D','E','C','N','M','R','Q','P','Y','X','B'};
    char input[200];
    int i, j, length;

    scanf("%[^\n]", &input);
    for (i = 0; input[i] != '\0'; ++i);
    length = i;
    for(i=0; i<length; i++) {
        if(input[i] >= 'A' && input[i] <= 'Z') {
            for(j=0; j<26; j++) {
                if(input[i] == abc[j]) {
                    if(j+5 >= 26) {
                        input[i] = abc[j+5-26];
                        break;
                    }
                    else {
                        input[i] = abc[j+5];
                        break;
                    }
                }
            }
        }
        else if(input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i]-32;
            for(j=0; j<26; j++) {
                if(input[i] == abc[j]) {
                    if(j+5 >= 26) {
                        input[i] = abc[j+5-26];
                        input[i] = input[i]+32;
                        break;
                    }
                    else {
                        input[i] = abc[j+5];
                        input[i] = input[i]+32;
                        break;
                    }
                }
            }
        }
    }
    printf("%s", input);

    return 0;
}