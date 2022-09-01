#include <stdio.h>

int main()
{

    int num, i, j = 0, k, l, m;
    char ascii[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    printf(" *** Show triangle with ASCII ***\n");
    printf("Enter a whole number : ");
    scanf("%d", &num);
    if (num >= 3 && num <= 25) {
        for (i = 0; i < num; i++) {
            m=i;
            if (m > 15) {
                m = m - 15 - 1;
            }
            printf("%c", ascii[m]);
        }
        printf("\n");

        j = num;                        //triangle
        for (m = 0; m < num - 1; m++) {
            i=m;
            while (i > 15) {
                i = i - 15 - 1;
            }
            while (j > 15) {
                j = j - 15 - 1;
            }
            printf("%c", ascii[j]);
            for (k = m; k < num - 3; k++) {
                printf(" ");
            }
            if (m < num - 2) {
                l = j + num-2-i;
                while (l > 15) {
                    l = l - 15 - 1;
                }
                printf("%c", ascii[l]);
            }
            j = j + (num - i - 1);
            printf("\n");
        }
    }
    else {
        printf("%d is out of range !!!", num);
    }

    return 0;
}
