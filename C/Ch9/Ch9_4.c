#include <stdio.h>

void mongkol(char *p);

int main() {
    char name[20];
    printf("Enter name : ");
    scanf("%[^\n]", &name);
    mongkol(name);
    printf("Mong-Kol name : %s", name);
}

void mongkol(char *p) {
    char vowel[] = {'i','e','o','u'}, *a;
    while (*p != '\0')
    {
        for(a=vowel; *a != '\0'; a++) {
            if(*p == *a || *p == *a-32) {
                if(*p >= 'A' && *p <= 'Z') {
                    *p = 'A';
                }
                else {
                    *p = 'a';
                }         
            }
        }
        p++;
    }
}