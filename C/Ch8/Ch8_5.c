#include<stdio.h>
#define SIZE 10

int main() {

    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];

    int i, j, i_max, count=0;
    float average=0, sum=0;
    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");
    for(i=0; i<SIZE; i++) {
        scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
    }

    for(i=0; i<SIZE; i++) {
        count = 0;
        for(j=0; j<SIZE; j++) {
            if(st[i].marking < st[j].marking) {
                break;
            }
            else {
                count++;
            }
        }
        if(count == 10) {
            i_max = st[i].marking;
            break;
        }
    }
    count = 0;
    for(i=0; i<SIZE; i++) {
        if(st[i].marking == i_max) {
            count++;
        }
    }
    printf("\n\n *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.", i_max, count);
    count = 1;
    for(i=0; i<SIZE; i++) {
        if(st[i].marking == i_max) {
            printf("\n%d. %s %s %d", count++, st[i].id, st[i].name, st[i].marking);
        }
    }


    return 0;
}