#include<stdio.h>
#include<string.h>

int main() {

    int num, i, j, k, count, count1, count2, length=0,check1=0, check2=0;
    char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", temp[50];
    printf("Enter positive number : ");
    scanf("%d", &num);
    if(num<=0) {
        printf("Out of range --> %d", num);
    }
    else {
        for(j=1,count=num, count1=0; count>0; j++) {
            if(count < j && j%2 == 0) {
                    //printf("a %d %d \n", count, j);
                    check2 = 2;
                    check1 = 2;
            }
            if(count < j && j%2 != 0) {
                    //printf("a %d %d \n", count, j);
                    check2 = 1;
                    check1 = 1;
            }
            for(i=0; i<j && count>0; i++, count--);
        }
        length += j-1;       //มีทั้งหมด length บรรทัด
        //printf("%d\n", length);
        for(j=1,count=num, count1=0; count>0; j++) {  //j=บรรทัดแนวตั้ง  count= นับจำนวนตัวอักษร
            if(j%2 == 0) {          ///////////////////ถ้าบรรทัดคู่ ต้องเรียงจากหลังไปหน้า
            count2 = count;
                switch (check2)     //จุดข้างหน้า
                {
                case 1:
                    for(k=0; k<length-j-1; k++) {     
                        printf(".");
                    }
                    break;
                case 2:
                    for(k=0; k<length-j-2; k++) {     
                        printf(".");
                    }
                    //printf("%d %d %d \n", length, j, count2);
                    break;
                default:
                    for(k=0; k<length-j; k++) {     
                        printf(".");
                    }
                    break;
                }
                if(length == j && check2 == 2) {
                        for(k=0; k<length-2-count2; k++) {     
                            printf(".");
                        }
                    }
                strcpy(temp, "");
                
                for(i=0; i<j && count>0; i++, count--, count1++) {   //i= จำนวตัวอักษรใน 1 บรรทัด
                    if(count1 > 25) {
                        count1 -= 26;
                    }
                temp[i] = abc[count1]; 
                }
                if(count2<j) {          //ในบรรทัดนั้นตัวอักษรไม่ครบ
                    for(i=count2-1; i>=0; i--) {
                        printf("%c", temp[i]);
                    }
                }
                else {
                    for(i=j-1; i>=0; i--) {
                        printf("%c", temp[i]);
                    }
                }
                if(check2 == 1) {                    //จุดข้างหลัง
                    for(k=0; k<length-3; k++) {
                        printf(".");
                    }
                }
                else {
                    for(k=0; k<length-2; k++) {
                        printf(".");
                    }
                }
            }

            else {                   /////////////////ถ้าบรรทัดคี่ เรียงปกติ
                switch (check1)                //จุดข้างหน้า
                {
                case 1:
                    for(k=1; k<length-1; k++) {     
                        printf(".");
                    }
                    break;
                case 2:
                    for(k=1; k<length-2; k++) {     
                        printf(".");
                    }
                    break;
                default:
                    for(k=1; k<length; k++) {     
                        printf(".");
                    }
                    break;
                }
                count2 = count;
                for(i=0; i<j && count>0; i++, count--, count1++) {
                    if(count1 > 25) {
                        count1 -= 26;
                    }
                    printf("%c", abc[count1]);
                }
                if(check1 == 1) {           //จุดข้างหลัง
                    for(k=0; k<length-j-2; k++) {     
                        printf(".");
                    }
                    if(length == j) {
                        for(k=0; k<length-2-count2; k++) {     
                            printf(".");
                        }
                    }
                }
                else {
                    for(k=0; k<length-j-1; k++) {     
                        printf(".");
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}