#include<stdio.h>

int main() {

    int num[7][11] = {    2,   3,   5,   7,  11,  13,  17,  19,  29,  31,  18,
                         37,  41,  43,  37,  61,  71,  73,  79,  83,  97,  21,
                        103, 107, 109, 113, 131, 151, 181, 191, 193, 173,  48,
                        163, 113, 102, 107, 127, 137, 257, 139, 149, 369,  23,
                        212, 224, 236, 248, 313, 326, 339, 341, 355, 368,  108,
                          2,   4,   6,   6,  10,  12,  14,  16,  18,  20,  77,
                          1,   3,   5,   7,   9,  11,  13,  17,  19,  21,  89 };
    int value, i, j, count=0;
    printf(" *** Find a value in array 2 dimension ***\n");
    printf("Enter a value : ");
    scanf("%d", &value);
    for(i=0; i<7; i++) {
        for(j=0; j<11; j++) {
            printf("  %3d", num[i][j]);
        }
        printf("\n");
    }
    printf("\nFinding value => %d", value);
    for(i=0; i<7; i++) {
        for(j=0; j<11; j++) {
            if(value == num[i][j]) {
                count++;
                printf("\n%d. (row,column) => (%d,%d)", count, i+1, j+1);
            }
        }
    }
    if(count == 0) {
        printf("\n --- !!! NOT FOUND !!! ---");
    }

    return 0;
}