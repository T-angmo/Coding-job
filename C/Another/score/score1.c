#include<stdio.h>
#include<math.h>

int score, midterm, final;
int a, b, c, d;
int count[5];

void check_grade(int *check, int num1, int num2) {
    if(num1>num2) {
        *check = 1;
    }
}

void check_score(int *check, int num1, int num2) {
    if(num1>=num2 && num2>=0 ) {
        *check = 1;
    }
}

void showGrade(int sum) {
    printf("Grade : ");
        if(sum >= a) {
            printf("A");
            count[0]++;
        }
        else if(sum >= b) {
            printf("B");
            count[1]++;
        }
        else if(sum >= c) {
            printf("C");
            count[2]++;
        }
        else if(sum >= d) {
            printf("D");
            count[3]++;
        }
        else {
            printf("F");
            count[4]++;
}}

int main() {

    int maxScore, student, i;
    int check = 0;
    int studentScore, studentMidterm, studentFinal;
    printf("Computer Programming %60s", "18/03/2022");
    printf("\n\n-------------------");
    printf("\nSetup score");
    printf("\nScore in class : ");
    scanf("%d", &score);
    printf("Midterm exam : ");
    scanf("%d", &midterm);
    printf("Final exam : ");
    scanf("%d", &final);


        printf("\n-------------------");
        printf("\nSetup grade");
        printf("\nMaximum score : ");
        scanf("%d", &maxScore);
        while(1) {
            check=0;
            printf("Lowest for A : ");
            scanf("%d", &a);
            check_grade(&check, maxScore, a);
            if(check == 1) {
                break;
            }
            printf("Error! try again.\n");
        }
        while(1) {
            check=0;
            printf("Lowest for B : ");
            scanf("%d", &b);
            check_grade(&check, a, b);
            if(check == 1) {
                break;
            }
            printf("Error! try again.\n");
        }
        while(1) {
            check=0;
            printf("Lowest for C : ");
            scanf("%d", &c);
            check_grade(&check, b, c);
            if(check == 1) {
                break;
            }
            printf("Error! try again.\n");
        }
        while(1) {
            check=0;
            printf("Lowest for D : ");
            scanf("%d", &d);
            check_grade(&check, c, d);
            if(check == 1) {
                break;
            }
            printf("Error! try again.\n");
        }
        
    printf("\n-------------------");
    printf("\nNumber of student : ");
    scanf("%d", &student);
    
    int max, min;
    double avg = 0, sd = 0, sumAll=0, sumAll2=0, sum[student], n;
    for(i=0; i<student; i++) {
        printf("\nStudent %d\n\n", i+1);
        while(1) {
            check=0;
            printf("Input score : ");
            scanf("%d", &studentScore);
            check_score(&check, score, studentScore);
            if(check == 1) {
                break;
            }
            printf("Error! try again.\n");
        }
        while(1) {
            check=0;
            printf("Input midterm : ");
            scanf("%d", &studentMidterm);
            check_score(&check, midterm, studentMidterm);
            if(check == 1) {
                break;
            }
            printf("Error! try again.\n");
        }
        while(1) {
            check=0;
            printf("Input final : ");
            scanf("%d", &studentFinal);
            check_score(&check, final, studentFinal);
            if(check == 1) {
                break;
            }
            printf("Error! try again.\n");
        }
            sum[i] = studentScore + studentMidterm + studentFinal;
            sumAll += sum[i];
            sumAll2 += sum[i]*sum[i];
            showGrade(sum[i]);
            printf("\n\n-------------------\n");
        
    }
    n = student;
    printf("\n\nMaximum = ");
    max = sum[0];
    for(i=1; i<student; i++) {
        if(sum[i] > max) {
            max = sum[i];
        }
    }
    printf("%d", max);
    printf("\nMinimum = ");
    min = sum[0];
    for(i=1; i<student; i++) {
        if(sum[i] < min) {
            min = sum[i];
        }
    }
    printf("%d", min);
    printf("\nAverage = ");
    avg = sumAll/n;
    printf("%lf", avg);
    //printf("\n%lf %d %lf %lf", sumAll2, student, sumAll, avg);
    printf("\nStd. Dev. = ");
    sd = sqrt((sumAll2 - student*(pow(sumAll/student, 2)))/student);
    printf("%lf", sd);

    printf("\n\nFrequency : ");
    printf("\nA : %d", count[0]);
    printf("\nB : %d", count[1]);
    printf("\nC : %d", count[2]);
    printf("\nD : %d", count[3]);
    printf("\nF : %d", count[4]);
    printf("\n\nEND");



    return 0;
}