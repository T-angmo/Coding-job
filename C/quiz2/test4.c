#include<stdio.h>
#include<math.h>

int main() {

    int a,b,c, temp;
    printf(" *** Check for right triangle ***\n");
    printf("Enter 3 sides of triangle : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d, %d and %d ", a,b,c);
    if(b>=a && b>=c) {
        temp = a;
        a=b, b=temp;
    }
    else if(c>=b && c>=a) {
        temp = a;
        a=c, c=temp;
    }
    if(a>=b && a>=c) {
        if(pow(a,2) == (pow(b,2)+pow(c,2))) {
            printf("are sides of RIGHT triangle.");
        }
        else if(b+c >= a) {
            printf("are NOT sides of RIGHT triangle,just a TRIANGLE.");
        }
         else {
        printf("are NOT sides of triangle.");
    }   
    }
    
    


    return 0;
}