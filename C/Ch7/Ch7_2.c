#include <stdio.h>

float discount(int prize, float coupon);

int main()
{
    float prize1, prize2, coupon1, coupon2;
    printf("Enter 2 prizes and 2 coupons : ");
    scanf("%f %f %f %f", &prize1, &prize2, &coupon1, &coupon2);

    float sale1 = discount(prize1, coupon1);
    float sale2 = discount(prize2, coupon2);
    
    printf("Item1 %.0f -> %.2f\n", prize1, sale1);
    printf("Item2 %.0f -> %.2f\n", prize2, sale2);

    if (sale1 < sale2)
        printf("* Item1 is cheaper");
    else if (sale1 == sale2)
        printf("* Item1 is equal to Item2");
    else
        printf("* Item2 is cheaper");
}

float discount(int prize, float coupon)
{
    return prize-(prize*coupon/100);
}