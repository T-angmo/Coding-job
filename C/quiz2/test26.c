#include<stdio.h>

int main() {

    int width,height,i,j,k;
    printf("Enter width height : ");
    scanf("%d %d", &width, &height);
    printf("Width : %d, Height : %d\n\n", width,height);
    printf("123456789");
    for(i=0; i<4; i++) {
        printf(".123456789");
    }
    for(i=0; i<height; i++) {
        printf("\n");
        for(j=0; j<width; j++) {
            printf("*");
        }
        
    }

   return 0;
}