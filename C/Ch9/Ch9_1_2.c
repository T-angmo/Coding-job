#include<stdio.h>

int main() {

    int wallet = 20, income;
    printf("Enter money : ");
    scanf("%d", &income);
    add_money_to_wallet(income, &wallet);
    printf("My wallet -> %d", wallet);
}

void add_money_to_wallet(int income, int *wallet) {
    *wallet += income;
}