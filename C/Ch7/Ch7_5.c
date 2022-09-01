#include<stdio.h>

int min;
int max;

void computeMinMax(int,int,int,int);

int main() {

  	int a,b,c,d;
  	printf(" *** Find Min and Max value of 4 inputs ***\n");
   	printf("Enter 4 integers : ");
  	scanf("%d %d %d %d",&a,&b,&c,&d);
  	computeMinMax(a,b,c,d);
  	printf("The minimum number is %d\n",min);
    printf("The maximum number is %d\n",max);

	return 0;
}

void computeMinMax(int a,int b,int c,int d) {
    int i, num[] = {a, b, c, d};
    min = num[0], max = num[0];
    for(i=0; i<4; i++) {
        if(num[i] < min) {
            min = num[i];
        }
        if(num[i] > max) {
            max = num[i];
        }
    }
}