#include<stdio.h>

void sort(int scores[5]) {
    int i,j, temp;
    for(i=0; i<4; i++) {
        for(j=i+1; j<5; j++) {
            if(scores[i]<scores[j]) {
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }
}

int main() {

    int scores[5], i;
    printf("Enter 5 score : ");
    for(i=0; i<5; i++)
        scanf("%d", &scores[i]);
    sort(scores);
    printf("Sorted : ");
    for(i=0; i<5; i++)
        printf("%d ", scores[i]);
}