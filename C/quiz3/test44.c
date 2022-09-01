// Enter inputs : 4 5 6
// number of even is 2
// number of odd is 1
#include<stdio.h>

int main() {

    int n[3],i,count=0;
    printf("Enter inputs : ");
    for(i=0; i<3; i++) {
        scanf("%d",&n[i]);
    }
    for(i=0; i<3; i++) {
        if(n[i]%2 == 0) {
            count++;
        }
    }
    printf("number of even is %d",count);
    printf("\nnumber of odd is %d",3-count);

    return 0;
}