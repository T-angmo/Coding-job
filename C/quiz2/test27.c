#include<stdio.h>

int main() {

    int width,height,temp,i,j;
    printf("Input two dimension : ");
    scanf("%d %d", &width,&height);
    if(width<height) {
        temp = width;
        width = height;
        height = temp;
    }
    if(width==height) {
        printf("This is square!\n");
    }
    else {
        printf("This is regtangle!!\n");
    }
    for(i=0; i<height; i++) {
        for(j=0; j<width; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}