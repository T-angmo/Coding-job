#include<stdio.h>

int main() {

    int n, num[100], i, j, ans=0;
    printf(" *** Sum of n(th) fibonacci numbers ***\n");
    printf("Input n : ");
    scanf("%d", &n);
    printf("Output  :");
    num[0] = 0,num[1] = 1;
    ans += num[0]+num[1];
    for(i=2; i<n+1; i++) {
        num[i] = num[i-1]+num[i-2];
        ans += num[i];
    }
    printf("%d", ans);


    return 0;
}