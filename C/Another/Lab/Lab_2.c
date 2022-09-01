#include<stdio.h>
#include<math.h>

typedef struct {
    double x;
    double y;
}Point;

double calculateDistance(Point p1, Point p2);

int main() {

    Point p1,p2;
    printf("Enter x1, y1 : ");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Enter x2, y2 : ");
    scanf("%lf %lf", &p2.x, &p2.y);
    printf("Distance between two points (x1,y1) and (x2,y2) : %.2f",calculateDistance(p1, p2));

    return 0;
}

double calculateDistance(Point p1, Point p2) {
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}