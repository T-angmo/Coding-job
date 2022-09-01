#include<stdio.h>
#include<stdlib.h>

int main() {

    char a[10], b[10], *pta, *ptb;
    int n, a1=0, b1=0, i, j, lenga, lengb;
    int num[] = {10,11,12,13,14,15};
    char abc[] = "abcdef";
    printf(" *** Base n Calculator ***\n");
    printf("Enter num1 num2 n : ");
    scanf("%s %s %d", a, b, &n);
    
    if(n >= 2 && n<= 16) {
        for(pta=a, lenga=0; *pta != '\0'; pta++, lenga++);
        for(ptb=b, lengb=0; *ptb != '\0'; ptb++, lengb++);

        for(pta=a, i=lenga-1; i>=0; pta++, i--) {
            if(*pta >= 'a' && *pta <= 'f') {    //if abcdef
                for(j=0; j<6; j++) {
                    if(*pta == abc[j]) {
                        a1 += (num[j]*pow(n, i));
                    }
                }
            }
            else {                              //if 0-9
                if((int)(*pta)-48 >= n) {
                    printf("%s is NOT valid.", a);
                    exit(0);
                }
                a1 += ((int)(*pta)-48)*pow(n, i);
            }
        }

        for(ptb=b, i=lengb-1; i>=0; ptb++, i--) {
            if(*ptb >= 'a' && *ptb <= 'f') {    //if abcdef
                for(j=0; j<6; j++) {
                    if(*ptb == abc[j]) {
                        b1 += (num[j]*pow(n, i));
                    }
                }
            }
            else {                              //if 0-9
                if((int)(*ptb)-48 >= n) {
                    printf("%s is NOT valid.", b);
                    exit(0);
                }
                b1 += ((int)(*ptb)-48)*pow(n, i);
            }
        }
        printf("%s + %s (%d) = %d + %d (decimal) = %d (decimal)", a, b, n, a1, b1, a1+b1);
    }
    else {
        printf("base_n(%d) is NOT valid.", n);
    }

    return 0;
}