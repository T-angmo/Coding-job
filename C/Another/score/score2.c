#include<stdio.h>
#include<math.h>
#include<stdlib.h>

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
    printf("\n\nGrade : ");
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

    int maxScore = 100, student = 0, i;
    int studentScore, studentMidterm, studentFinal;
    char temp[20], chr;
    char *setupFile = "11-1-setup.txt", *scoreFile = "11-1-score.txt";
    printf("Computer Programming %60s", "18/03/2022\n");

    FILE *fp;
    fp = fopen(setupFile, "r");              //open setup file
    if(fp != NULL) {
        printf("\nSETUP file : %s", setupFile);
    }
    printf("\n-------------------");
    printf("\nSetup score");
    printf("\nScore in class : ");
    fscanf(fp, "%s", temp);
    fscanf(fp, "%s", temp);
    score = atoi(temp);
    printf("%d", score);

    printf("\nMidterm exam : ");
    fscanf(fp, "%s", temp);
    fscanf(fp, "%s", temp);
    midterm = atoi(temp);
    printf("%d", midterm);

    printf("\nFinal exam : ");
    fscanf(fp, "%s", temp);
    fscanf(fp, "%s", temp);
    final = atoi(temp);
    printf("%d", final);
    
    printf("\n-------------------");
    printf("\nSetup grade");
    printf("\nMaximum score : 100");
    printf("\nLowest for A : ");
    fscanf(fp, "%s", temp);
    fscanf(fp, "%s", temp);
    a = atoi(temp);
    printf("%d", a);

    printf("\nLowest for B : ");
    fscanf(fp, "%s", temp);
    fscanf(fp, "%s", temp);
    b = atoi(temp);
    printf("%d", b);

    printf("\nLowest for C : ");
    fscanf(fp, "%s", temp);
    fscanf(fp, "%s", temp);
    c = atoi(temp);
    printf("%d", c);

    printf("\nLowest for D : ");
    fscanf(fp, "%s", temp);
    fscanf(fp, "%s", temp);
    d = atoi(temp);
    printf("%d", d);
    printf("\n-------------------\n");
    fclose(fp);                                     //close setup file


    fp = fopen(scoreFile, "r");              //open score file
    if(fp != NULL) {
        printf("\nSETUP file : %s",scoreFile);
    }
    printf("\nNumber of student : ");
    chr = getc(fp);
    while(chr != EOF) {
        if(chr == '\n') {
            student++;
        }
        chr = getc(fp);
    }
    printf("%d", student);
    fclose(fp);                                     //close score file
    printf("\n-------------------\n");

    int max, min;
    double avg = 0, sd = 0, sumAll=0, sumAll2=0, sum[student], n;

    fp = fopen(scoreFile, "r");              //open score file
    for(i=0; i<student; i++) {
        printf("Student %d", i+1);
        printf("\n\nInput score : ");
        fscanf(fp, "%s", temp);
        fscanf(fp, "%s", temp);
        studentScore = atoi(temp);
        printf("%d", studentScore);

        printf("\nInput midterm : ");
        fscanf(fp, "%s", temp);
        studentMidterm = atoi(temp);
        printf("%d", studentMidterm);

        printf("\nInput final : ");
        fscanf(fp, "%s", temp);
        studentFinal = atoi(temp);
        printf("%d", studentFinal);
        
        sum[i] = studentScore + studentMidterm + studentFinal;
        sumAll += sum[i];
        sumAll2 += sum[i]*sum[i];
        showGrade(sum[i]);
        printf("\n-------------------\n");
    }
    fclose(fp);                                     //close score file
 
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