#include<stdio.h>
#include<string.h>

void palindrome(char *);

int main() {
    char str[100];
    printf(" ***  Palindrome Verification  ***\n");
    printf(" *  verify only alphabet number  *\n");
    printf(" *        insensitive case       *\n");
    printf(" *-------------------------------*\n");
    printf("Enter a sentence : ");
    scanf("%[^\n]",str);
    printf("Entered message : %s\n",str);
    palindrome(str);
	return 0;
}

void palindrome(char *p) {
    char *pt1, *pt2;
    for(pt2=p; *pt2!='\0';pt2++); //เลื่อนให้ pt2 ไปอยู่ตัวสุดท้าย
    pt2--;
    for(pt1=p; pt1<pt2;) {
        //printf("%c %c\n", *pt1, *pt2);
        if(*pt1 < '0' || (*pt1 > '9' && *pt1 < 'A') || (*pt1 > 'Z' && *pt1 < 'a') || *pt1 > 'z' || *pt1 == ' ') {  //ถ้า pt1 เป็นอักษรพิเศษ ช่องว่าง (space)
            pt1++;
        }
        else if(*pt2 < '0' || (*pt2 > '9' && *pt2 < 'A') || (*pt2 > 'Z' && *pt2 < 'a') || *pt2 > 'z' || *pt2 == ' ') { //ถ้า pt2 เป็นอักษรพิเศษ ช่องว่าง (space)
            pt2--;
        }
        else if(*pt1 == *pt2-32 || *pt1 == *pt2+32 || *pt1 == *pt2) {    //ตัวอักษรตัวใหญ่ และตัวเล็กถือเป็นตัวเดียวกัน //ตัวอักษรเดียวกัน
            pt1++, pt2--;
        }
        else if(*pt1!=*pt2) {   //ไม่ใช่ตัวอักษรเดียวกัน
            break;
        }
    }
    printf("\"");
    for(;*p != '\0'; p++) {
        printf("%c",*p);
    }
    printf("\" ");
    if (pt1 < pt2) {
        printf("is NOT palindrom.\n");
    } 
    else {
        printf("is PALINDROME.\n");
    }
}