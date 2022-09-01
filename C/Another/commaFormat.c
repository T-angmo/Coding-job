#include<stdio.h>

int main() {

    long long number, num, ans;     //เมื่อนำหน้าตัวแปร = จำนวนไบต์เป็น 2 เท่าของ จำนวนเดิม
    printf("***Display integer in comma format***\n");
    printf("Enter an integer : ");
    scanf("%d", &num);
    printf("%d in comma format = ", num);

    if(num < 1000) {
        printf("%d", num);
    }
    else if(num <1000000) {
        printf("%d,%03d", num/1000, num%1000);
    }
    else if(num <1000000000) {
        printf("%d,%03d,%03d", num/1000000, (num%1000000)/1000, num%1000);
    }
    else if(num <10000000000) {
        printf("%d,%03d,%03d,%03d", num/1000000000, (num%1000000000)/1000000, (num%1000000)/1000, num%1000);
    }

    return 0;
}