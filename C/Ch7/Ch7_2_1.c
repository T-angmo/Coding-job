#include<stdio.h>
void quadratic_solver(int a,int b,int c);
int main() {
	int a,b,c;
	float ans1, ans2;
	printf(" *** Quadratic Solver ***\n");
	printf(" *   ax^2 + bx + c = 0  *\n");
	printf(" ************************\n\n");
	printf("Enter a b c : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a==0) {
		printf("a cannot be zero ! ! !\n");
		return 0;
	}
	quadratic_solver(a,b,c);
	return 0;
}

void quadratic_solver(int a,int b,int c) {
    int x, x1, x2;
    float temp=0, sqrt;
    x = (b*b)-(4*a*c);
    sqrt = x/2;
    while(sqrt != temp) {
        temp = sqrt;
        sqrt = ((x/temp)+temp)/2;
    }
    //printf("%f", sqrt);
    x = sqrt;
    x1 = (-b-x)/(2*a);
    x2 = (-b+x)/(2*a);
    if(x1 == x2) {
        printf("x = %d",x1);
    }
    else {
        printf("x1 = %d\nx2 = %d", x1, x2);
    }
}