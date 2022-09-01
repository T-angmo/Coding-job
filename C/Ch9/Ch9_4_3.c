#include <stdio.h>

void cutify(char *p);

int main() {
    char name[20];
    printf("Enter name : ");
    scanf("%[^\n]", &name);
    cutify(name);
    printf("Cutify name : %s", name);
}

void cutify(char *p) {
    char vowel[] = {'a','e','o','u'}, *a;
    while (*p != '\0')
    {
        for(a=vowel; *a != '\0'; a++) {
            if(*p == *a || *p == *a-32) {
                if(*p >= 'A' && *p <= 'Z') {
                    *p = 'I';
                }
                else {
                    *p = 'i';
                }         
            }
        }
        p++;
    }
}