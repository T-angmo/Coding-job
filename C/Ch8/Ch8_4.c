#include<stdio.h>
#define SIZE 10

int main() {

    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];

    int i, i_max, i_min, num[SIZE];
    float average=0, sum=0;
    printf(" *** Structure Array ***\n");
    printf("Enter data : ");
    for(i=0; i<SIZE; i++) {
        scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
    }
    for(i=0; i<SIZE; i++) {
        sum = sum + st[i].marking;
    }

    // find max marking
    i_max=0;
    for(i=0; i<SIZE; i++) {
        num[i] = st[i].marking;
    }
    for(i=1; i<SIZE; i++) {
        if(num[0] < num[i]) {
            num[0] = num[i];
        }
    }
    i_max = num[0];

    // find min marking
    i_min=0;
    for(i=0; i<SIZE; i++) {
        num[i] = st[i].marking;
    }
    for(i=1; i<SIZE; i++) {
        if(num[0] > num[i]) {
            num[0] = num[i];
       
        }
    }
    i_min = num[0];

    //calculate average
    average = sum/SIZE;
    printf("\n\n *** Analyzing Data ***\n");
    printf("Average marking = %.3f\n", average);
    printf("Min -- Max      = %d --> %d\n", i_min, i_max);

    return 0;
}