#include<stdio.h>

int lcm(int n1,int n2) {
    int temp,i;
    if(n1>n2) {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    for(i=n2; ;i++) {
        if(i%n1 == 0 && i%n2 == 0) {
            return i;
        }
    }
}

int main() {

    int n1,n2,i,j;
    printf("Enter two positive numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("The LCM of %d and %d is %d.",n1,n2,lcm(n1,n2));
    

    return 0;
}