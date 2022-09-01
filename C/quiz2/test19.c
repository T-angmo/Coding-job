#include<stdio.h>

int main() {

    char name[20],sur[20];
    int age,i,j,luck;
    printf("Enter name surname and age : ");
    scanf("%s %s %d",&name,&sur,&age);
    for(i=0; name[i] != '\0'; i++);
    printf("First name = %2d digit",i);
    for(j=0; sur[j] != '\0'; j++);
    printf("\n Last name = %2d digit",j);
    luck = (i+j)*age;
    luck = luck/10, luck = luck%10;
    printf("\nYours lucky number (%d) is %d",(i+j)*age,luck);

    return 0;
}