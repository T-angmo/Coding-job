#include<stdio.h>

int gcd(int n1,int n2) {
    int temp,i;
    if(n1<0) {
        n1 = n1-n1-n1;
    }
    if(n2<0) {
        n2 = n2-n2-n2;
    }
    if(n1>n2) {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    temp=0;
    for(i=1; i<=n1;i++) {
        if(n1%i == 0 && n2%i == 0) {
            temp =i;
        }
    }
    return temp;
}

int main() {

    int n1,n2,i,j;
    printf("Enter number 2 numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("G.C.D ( %d, %d ) = %d",n1,n2,gcd(n1,n2));
    
    

    return 0;
}