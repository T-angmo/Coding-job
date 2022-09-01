#include<stdio.h>

int main() {

    char str[100],*pt1, *pt2;
    printf(" *** Palindrome Verification ***\n");
    printf("Enter a sentence : ");
    scanf("%[^\n]",str);
    printf("\"%s\" ",str);
    for(pt2=str; *pt2!='\0';pt2++);
    pt2--;
    for(pt1=str; pt1<pt2; pt1++,pt2--) {
        if(*pt1 < '0' || (*pt1 > '9' && *pt1 < 'A') || (*pt1 > 'Z' && *pt1 < 'a') || *pt1 > 'z') {
            pt1++;
        }
        else if(*pt2 < '0' || (*pt2 > '9' && *pt2 < 'A') || (*pt2 > 'Z' && *pt2 < 'a') || *pt2 > 'z') {
            pt2++;
        }
        else if(*pt1 == *pt2-32 || *pt1 == *pt2+32);
        else if(*pt1!=*pt2) {
            break;
        }
    }
    if (pt1 < pt2) {
        printf("is NOT palindrom.\n");
    } 
    else {
        printf("is PALINDROME.\n");
    }

	return 0;
}