#include<stdio.h>

int main() {

    int arr[10],i,j;
    printf(" *** Show max * min ***\n");
    printf("Enter 10 integers : ");
    for(i=0; i<10; i++) {
        scanf("%d",&arr[i]);
    }
    int min = arr[0], max = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d * %d = %d",max,min,max*min);

    return 0;
}