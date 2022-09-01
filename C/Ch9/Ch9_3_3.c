#include<stdio.h>

void sort(int ratings[5]) {
    int i,j, temp;
    for(i=0; i<4; i++) {
        for(j=i+1; j<5; j++) {
            if(ratings[i]>ratings[j]) {
                temp = ratings[i];
                ratings[i] = ratings[j];
                ratings[j] = temp;
            }
        }
    }
}

int main() {

    int ratings[5], i;
    printf("Enter 5 rating : ");
    for(i=0; i<5; i++)
        scanf("%d", &ratings[i]);
    sort(ratings);
    printf("Sorted : ");
    for(i=0; i<5; i++)
        printf("%d ", ratings[i]);
}