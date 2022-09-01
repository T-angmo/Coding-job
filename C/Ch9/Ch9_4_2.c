#include<stdio.h>       //ยังไม่เสร็จ

char roman[200];
void number2roman(int number) {
  //this function is to convert number num
  //to roman string as global variable
  int i;
  for(i=0; roman[i] != '\0'; i++) {
      roman[i] = ' ';
  }
  for(i=0; number != 0; i++) {
      if(number >= 500) {    //d
        roman[i] = 'd';
        number -= 500;
      }
      else if(number >= 400) {  //cd
        roman[i] = 'c';
        i++;
        roman[i] = 'd';
        number -= 400;
      }
      else if(number >= 100) {  //c
        roman[i] = 'c';
        number -= 100;
      }
      else if(number >= 90) {  //xc
        roman[i] = 'x';
        i++;
        roman[i] = 'c';
        number -= 90;
      }
      else if(number >= 50) {  //l
        roman[i] = 'l';
        number -= 50;
      }
      else if(number >= 40) {  //xl
        roman[i] = 'x';
        i++;
        roman[i] = 'l';
        number -= 40;
      }
      else if(number >= 10) {  //x
        roman[i] = 'x';
        number -= 10;
      }
      else if(number >= 9) {  //ix
        roman[i] = 'i';
        i++;
        roman[i] = 'x';
        number -= 9;
      }
      else if(number >= 5) {  //v
        roman[i] = 'v';
        number -= 5;
      }
      else if(number >= 4) {  //iv
        roman[i] = 'i';
        i++;
        roman[i] = 'v';
        number -= 4;
      }
      else if(number >= 1) {  //i
        roman[i] = 'i';
        number -= 1;
      }
  }
}

int main() {
    int count_i=0, count_v=0, count_x=0, count_l=0, count_c=0, i, num_test;
    int num; //to get input from user
    char ch;

    printf(" *** Count Roman Characters ***\n");
    printf("Enter last number (1..x) : ");
    scanf("%d",&num);
    //printf("input -> %d\n",num):
    //number2roman(num);
    for(num_test = 1; num_test<=num; num_test++) {
        number2roman(num_test);
        for(i=0; roman[i] != '\0'; i++) {
            ch = roman[i];
            switch(ch) {
            case 'i':
                count_i++;
                break;
            case 'v':
                count_v++;
                break;
            case 'x':
                count_x++;
                break;
            case 'l':
                count_l++;
                break;
            case 'c':
                count_c++;
                break;
            } //switch
        } //for
    } //for
    printf("The number of \'i\' = %d\n",count_i);
    printf("The number of \'v\' = %d\n",count_v);
    printf("The number of \'x\' = %d\n",count_x);
    printf("The number of \'l\' = %d\n",count_l);
    printf("The number of \'c\' = %d\n",count_c);
    //printf("%d %d %d %d idin",count_i,count_v,count_x,count_l,count_c);

    return 0;
}