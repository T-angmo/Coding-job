#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//#include <conio.h>
struct name {
  char name[30];
  char last[30];
} user[30];
int user1[30];
// variable
int c = 0, R = 0, timeTicket = 0, count = 0, nameTicket = 0;
int date, theater, person = 0, temp, temp1, seat, cancleSeat, temp5;
int menu, i = 0, j = 0, k = 0, countUser=0;
char temp2[50], temp3, temp4, ch;
int main(void) {
  FILE *Ticket;
  do {
    if (i == 0)
      system("cls");
    printf("Enter Recently time\n");
    printf("DATE/00/ : ");
    scanf("%d", &date);
    printf("May 2022");
    getchar();
    i++;
  } while (date > 30);
  i = 0;
  float ti, hr;
  do {
    printf("\n\nTime : XX.XX");
    printf("\nTime : ");
    scanf("%f", &ti);
    getchar();
    hr = ti;
    while (hr < 24) {
      hr++;
    }
    hr = hr - 24;
    i++;
  } while (ti >= 24.00 || hr > 0.6);
  system("cls");
  
  do{
    count=0, menu=0;
    do {
      if(menu == 0) {                                               //menu
        printf("\n\n");
        printf("                    Movie Ticket Booking\n");
        printf(" ==================================================================\n");
        printf("||                             MENU                               ||\n");
        printf("||              Press  1- To Booking ticket:                      ||\n");
        printf("||              Press  2- Exit system:                            ||\n");
        printf("||              Press  3- To cancel the seat:                     ||\n");
        printf(" ==================================================================\n");
        printf("  Enter your choice : ");
        scanf("%d", &menu);
      }
      
      if (menu == 1) {                                             //select movie
        count=1;
        do {
          system("cls");
          printf("\nEnter your name : ");
          scanf("%s", user[countUser].name);
          printf("\nEnter your lastname : ");
          scanf("%s", user[countUser].last);
          printf("\n\n>>>> Select The Movie <<<<\n");
          printf("\t\t\tpress 1 for Docter Sternge in the Multiverse of Madness\n");
          printf("\t\t\tpress 2 for Six Minutes to Midnight\n");
          printf("\t\t\tpress 3 for It's A Flickering Life\n");
          printf("\t\t\tpress 4 for Everything Everywhere All at Once\n");
          printf("\t\t\tpress 5 for Bang Fai Slider\n");
          printf("\t\t\tpress 6 for What She like\n");
          printf("\t\t\tpress 7 for Unbearable Weight of Massive Talent\n");
          printf("\t\t\tpress 8 for Super Who\n");
          printf("\t\t\tpress 9 for Top Gun : Maverick\n");
          printf("\t\t\tpress 10 for What to Do with the Dead Kaiju?\n");
          printf("\t\t\tpress 11 for Detective Conan 25 : HALLOWEEN no Hanayome\n");
          printf("\t\t\tpress 12 for Fireheart\n");

          printf("\nEnter your Movie number : ");
          scanf("%d", &c);
          nameTicket = c;
          printf("\n================================================================\n");
        } while (c < 1 || c > 12);
        system("cls");

        if (c == 1) { // may be input time file
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("Docter Sternge in the Multiverse of Madness \n");
          printf("1) Round : 10.00 AM.\n");
          printf("2) Round : 14.20 PM.\n");
          printf("3) Round : 18.40 PM.\n");
          printf("\n\nSelect : ");
          scanf("%d", &R);
          timeTicket = R;
          switch (R) {
            case 1:
              printf("You choose Docter Sternge in the Multiverse of Madness , Round 10.00\n");
              break;
            case 2:
              printf("You choose Docter Sternge in the Multiverse of Madness , Round 14.20\n");
              break;
            case 3:
              printf("You choose Docter Sternge in the Multiverse of Madness , Round 18.40\n");
              break;
            getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 2) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("Six Minutes to Midnight \n");
          printf("1) Round : 10.00 AM.\n");
          printf("2) Round : 14.20 PM.\n");
          printf("3) Round : 18.40 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R;
          } while (R > 3);
          switch (R) {
            case 1:
              printf("You choose Six Minutes to Midnight , Round 10.00\n");
              break;
            case 2:
              printf("You choose Six Minutes to Midnight , Round 14.20\n");
              break;
            case 3:
              printf("You choose Six Minutes to Midnight , Round 18.40\n");
              break;
            getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 3) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("It's A Flickering Life \n");
          printf("1) Round : 10.00 AM.\n");
          printf("2) Round : 14.20 PM.\n");
          printf("3) Round : 18.40 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R;
          } while (R > 3);
          switch (R) {
          case 1:
            printf("You choose It's A Flickering Life , Round 10.00\n");
            break;
          case 2:
            printf("You choose It's A Flickering Life , Round 14.20\n");
            break;
          case 3:
            printf("You choose It's A Flickering Life , Round 18.40\n");
            break;
          getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 4) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("Everything Everywhere All at Once \n");
          printf("1) Round : 10.00 AM.\n");
          printf("2) Round : 14.20 PM.\n");
          printf("3) Round : 18.40 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R;
          } while (R > 3);
          switch (R) {
          case 1:
            printf("You choose Everything Everywhere All at Once , Round 10.00\n");
            break;
          case 2:
            printf("You choose Everything Everywhere All at Once , Round 14.20\n");
            break;
          case 3:
            printf("You choose Everything Everywhere All at Once , Round 18.40\n");
            break;
          getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 5) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("Bang Fai Slider \n");
          printf("1) Round : 10.00 AM.\n");
          printf("2) Round : 14.20 PM.\n");
          printf("3) Round : 18.40 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R;
          } while (R > 3);
          switch (R) {
          case 1:
            printf("You choose Bang Fai Slider , Round 10.00\n");
            break;
          case 2:
            printf("You choose Bang Fai Slider , Round 14.20\n");
            break;
          case 3:
            printf("You choose Bang Fai Slider , Round 18.40\n");
            break;
          getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 6) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("What She like \n");
          printf("1) Round : 10.00 AM.\n");
          printf("2) Round : 14.20 PM.\n");
          printf("3) Round : 18.40 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R;
          } while (R > 3);
          switch (R) {
          case 1:
            printf("You choose What She like , Round 10.00\n");
            break;
          case 2:
            printf("You choose What She like , Round 12.00\n");
            break;
          case 3:
            printf("You choose What She like , Round 18.40\n");
            break;
          getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 7) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("Unbearable Weight of Massive Talent\n");
          printf("1) Round : 12.10 AM.\n");
          printf("2) Round : 16.30 PM.\n");
          printf("3) Round : 20.50 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R+3;
          } while (R > 3);
          switch (R) {
          case 1:
            printf("You choose Unbearable Weight of Massive Talent , Round 12.10\n");
            break;
          case 2:
            printf("You choose Unbearable Weight of Massive Talent , Round 16.30\n");
            break;
          case 3:
            printf("You choose Unbearable Weight of Massive Talent , Round 20.50\n");
            break;
          getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 8) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("Super Who\n");
          printf("1) Round : 12.10 AM.\n");
          printf("2) Round : 16.30 PM.\n");
          printf("3) Round : 20.50 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R+3;
          } while (R > 3);
          switch (R) {
          case 1:
            printf("You choose Super Who , Round 12.10\n");
            break;
          case 2:
            printf("You choose Super Who , Round 16.30\n");
            break;
          case 3:
            printf("You choose Super Who , Round 20.50\n");
            break;
          getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 9) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("Top Gun : Maverick\n");
          printf("1) Round : 12.10 AM.\n");
          printf("2) Round : 16.30 PM.\n");
          printf("3) Round : 20.50 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R+3;
          } while (R > 3);
          switch (R) {
          case 1:
            printf("You choose Top Gun : Maverick , Round 12.10\n");
            break;
          case 2:
            printf("You choose Top Gun : Maverick , Round 16.30\n");
            break;
          case 3:
            printf("You choose Top Gun : Maverick , Round 20.50\n");
            break;
            getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 10) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("What to Do with the Dead Kaiju?\n");
          printf("1) Round : 12.10 AM.\n");
          printf("2) Round : 16.30 PM.\n");
          printf("3) Round : 20.50 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R+3;
          } while (R > 3);
          switch (R) {
          case 1:
            printf("You choose What to Do with the Dead Kaiju? , Round 12.10\n");
            break;
          case 2:
            printf("You choose What to Do with the Dead Kaiju? , Round 16.30\n");
            break;
          case 3:
            printf("You choose What to Do with the Dead Kaiju? , Round 20.50\n");
            break;
          getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 11) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("Detective Conan 25 : HALLOWEEN no Hanayome\n");
          printf("1) Round : 12.10 AM.\n");
          printf("2) Round : 16.30 PM.\n");
          printf("3) Round : 20.50 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R+3;
          } while (R > 3);
          switch (R) {
          case 1:
            printf("You choose Detective Conan 25 : HALLOWEEN no Hanayome , Round 12.10\n");
            break;
          case 2:
            printf("You choose Detective Conan 25 : HALLOWEEN no Hanayome , Round 16.30\n");
            break;
          case 3:
            printf("You choose Detective Conan 25 : HALLOWEEN no Hanayome , Round 20.50\n");
          getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        if (c == 12) {
          printf("\n\n>>>> Select Movie Round <<<<\n");
          printf("Fireheart\n");
          printf("1) Round : 12.10 AM.\n");
          printf("2) Round : 16.30 PM.\n");
          printf("3) Round : 20.50 PM.\n");
          do {
            printf("\n\nSelect : ");
            scanf("%d", &R);
            timeTicket = R+3;
          } while (R > 3);
          switch (R) {
          case 1:
            printf("You choose Fireheart , Round 12.10\n");
          case 2:
            printf("You choose Fireheart , Round 16.30\n");
            break;
          case 3:
            printf("You choose Fireheart , Round 20.50\n");
            break;
          getchar();
          }
          system("cls");
          printf("\n****************************************************************\n");
        }
        
        // booking information
        printf("\n\nEnter the person of tickets you want to reserve (maximum 3)\n");
        printf("Enter person number  : ");
        scanf(" %d", &person);
        system("cls");
        printf("\n****************************************************************\n");

        int numseat, numChair[200], chair=0, status=0;
        char culum, coChair[200];
        //printf("\n%d %d",nameTicket, timeTicket);
        Ticket = fopen("ticket.txt", "r");
        while(fscanf(Ticket, "%d %d %c %d .", &temp,&temp1,&temp3,&temp5)== 4) {    //name round column numberchair
          //printf("\naaa %d %d %c  %d",temp,temp1,temp3, temp5);
          if(nameTicket==temp && timeTicket==temp1) {
            coChair[chair] = temp3;
            numChair[chair] = temp5;
            //printf("\n%c  %d",coChair[chair], numChair[chair]);
            //printf("\n %d", numChair[i]);
            chair++;
          }         
        }
        fclose(Ticket);
        printf("\n\n>>>> When booking more than 1 person will automatically reserve the left seat <<<<\n");
        printf("\n\n           >>>> Choose Your Seat <<<<               \n");
        printf("    1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16  \n");
        /*printf("K   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");
        printf("J   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");
        printf("I   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");
        printf("H   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");
        printf("G   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");
        printf("F   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");
        printf("E   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");
        printf("D   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");
        printf("C   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");
        printf("B   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");
        printf("A   X  X  X  X  X  X  X  X  X  X  X  X  X  X  X  X    \n");*/
        for(i=0, ch='K'; i<11; i++, ch--) {
          printf("%c ",ch);
          for(j=1; j<=16; j++) {
            status=0;
            for(k=0; k<chair; k++) {
              if(ch==coChair[k] && j==numChair[k]) {
                status=1;
                break;
              }
            }
            if(status==0)
              printf("  X");
            else
              printf("  -");
          }
          printf("\n");
        }
        if (person == 1) {
          status=0;
          do {
            status=0;
            printf("\nCulumn (K J I H G F E D C B A) : ");
            scanf(" %c", &culum);
            do {
              printf("\nnumber (1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16) : ");
              scanf("%d", &numseat);
            } while (numseat<1 || numseat>16);
            for(k=0; k<chair; k++) {
              if(culum==coChair[k] && numseat==numChair[k]) {
                status=1;
                break;
              }
            }
            if(status==1) {
              printf("\n\n  Cannot book this seat!!! Please choose another seat.\n");
            }
          } while (status==1);
        }
        else if (person == 2) {
          //printf("\nperson 2");
          status=0;
          do {
            status=0;
            printf("\nCulumn (K J I H G F E D C B A) : ");
            scanf(" %c", &culum);
            do {
              printf("\nnumber (1 2 3 4 5 6 7 8 9 10 11 12 13 14 15) : ");
              scanf("%d", &numseat);
            } while (numseat<1 || numseat>15); 
            temp = numseat;
            for(i=0; i<2; i++) {
              for(k=0; k<chair; k++) {
                //printf("\n   %d",temp);
                if(culum==coChair[k] && temp==numChair[k]) {
                  status=1;
                  break;
                }
              }
              temp++;
            }
            if(status==1) {
              printf("\n\n  Cannot book this seat!!! Please choose another seat.\n");
            }
          } while (status==1);
        }
        else if (person == 3) {
          status=0;
          do {
            status=0;
            printf("\nCulumn (K J I H G F E D C B A) : ");
            scanf(" %c", &culum);
            do {
              printf("\nnumber (1 2 3 4 5 6 7 8 9 10 11 12 13 14) : ");
              scanf("%d", &numseat);
            } while (numseat<1 || numseat>14); 
            temp = numseat;
            for(i=0; i<3; i++) {
              for(k=0; k<chair; k++) {
                //printf("\n   %d",temp);
                if(culum==coChair[k] && temp==numChair[k]) {
                  status=1;
                  break;
                }
              }
              temp++;
            }
            if(status==1) {
              printf("\n\n  Cannot book this seat!!! Please choose another seat.\n");
            }
          } while (status==1);
        }
        for(count=0; count<person; count++) {                           //keep data in ticket.txt
          Ticket = fopen("ticket.txt", "a+");
          fprintf(Ticket,"%d %d %c %d .\n",nameTicket, timeTicket,culum, numseat+count);
          fclose(Ticket);
        }
        system("cls");
        printf("\n\n=============================================================\n");
        printf("\n                  Your Booking Ticket                            ");
        printf("\n\n=============================================================\n");

        // movie information
        printf("\n\nMOVIE INFORMATION");
        printf("\n\nBooking Date : %d May 2022", date);
        printf("\nYour name : %s %s",user[countUser].name, user[countUser].last);
        countUser++;
        FILE *Name;
        Name = fopen("name.txt", "r");
        char name[50];
        for(count=0; count<nameTicket; count++) {
          fgets(name,50, Name);
        }
        printf("\n%s", name);
        fclose(Name);
        FILE *Time;
        Time = fopen("time.txt", "r");
        char round[9];
        for(count=0; count<timeTicket; count++) {
          fgets(round,50, Time);
        }
        printf("ROUND : %s", round);
        theater = nameTicket;
        if(theater>6) {
          theater -= 6;
        }
        printf("Theater : %d", theater);
        fclose(Time);
            
        printf("\n\nPrice : %d THB/Ticket",calPrice(c,R));
        for(count=1; count<=person; count++) {
          printf("\nYou Choose Seat %d : %c%d", count, culum, numseat+count-1);
        }
      }
      printf("\n=============================================================");
      printf("\n\n                Total price = %d THB", calPrice(c,R) * (person));
      printf("\n\n=============================================================");

      if (menu == 2) {                                             //exit
        system("cls");
        printf("\n\n\n");
        printf("\n\n================================================================\n");
        printf("\n                 Do You Sure to Exit Program ? ");
        printf("\n\n================================================================\n");
        int back;
        while(menu != 0) {
          printf("\n\nPress 1 : Go To Homepage");
          printf("\nPress 2 : Exit Program");
          printf("\nPlease Select :");
          scanf("%d", &back);
          if(back == 2) {
            system("cls");
            printf("\n\n=============================================================\n");
            printf("\n                          Thank You  ");
            printf("\n\n                      Enjoy The Movies  ");
            printf("\n\n=============================================================\n");
            exit(0);
          }
          else if(back == 1) {
            menu = 0;
          }
        }
      }

      if(menu == 3) {                                             //cancle
        menu=0;
        printf("\n===================================================================");
        printf("\n===================================================================");
        printf("\n\n                      Canceling the seat");
        Ticket = fopen("ticket.txt", "a+");
        printf("\n===================================================================\n");

        printf("\n\n>>>> Booked ticket <<<<");
        FILE *Name;
        Name = fopen("name.txt", "r");
        count = 0;
        char name[50];
        FILE *Time;
        Time = fopen("time.txt", "r");
        char round[9];
        seat = 1;
        while(fscanf(Ticket, "%d %d %c %d .", &temp,&temp1,&temp3,&temp5)== 4) {
          Name = fopen("name.txt", "r");
          Time = fopen("time.txt", "r");
          theater = temp;
            for(count=0; count<temp; count++) {
              fgets(name,50, Name);
            }
            printf("\n\t\t%s", name);
            for(count=0; count<temp1; count++) {
              fgets(round,50, Time);
            }
            printf("\t\tROUND : %s", round);
            if(theater>6) {
              theater -= 6;
            }
            printf("\t\tTheater : %d", theater);
            printf("\n\t\tSeat %d : %c%d",seat,temp3,temp5);
            seat++;
          printf("\n");

        }  
        fclose(Name);
        fclose(Time);
        printf("\nEnter number of seat that you want to cancle : ");
        scanf("%d",&cancleSeat);
        FILE *Temp = fopen("temp.txt", "w");
        Ticket = fopen("ticket.txt", "a+");
        //printf("\nseat %d %d",seat,cancleSeat);
        for(count=1; count<=seat-1; count++) {
          fgets(temp2,50,Ticket);
          if(count != cancleSeat) {
            fputs(temp2,Temp);
            //printf("%s",temp2);
          }
        }
        fclose(Ticket);
        fclose(Temp);
        Ticket = fopen("ticket.txt", "w+");
        Ticket = fopen("ticket.txt", "a+");
        Temp = fopen("temp.txt", "r");
        for(count=1; count<seat-1; count++) {
          fgets(temp2,50,Temp);
          fputs(temp2,Ticket);
          //printf("%s",temp2);
        }
        fclose(Ticket);
        fclose(Temp);
        printf("\n\n\t\t\tCancel the seat successfully.");
        printf("\n=====================================================================");
        printf("\n=====================================================================\n");
      }
    } while (count == 0);
  }while(1);
  return 0;
}

int calPrice(int c, int R) {
  if((c>=1 && c<=4) || c == 6) {
    if(R == 3) 
      return 200;
    else
      return 220;
  }
  else if(c==5) {
    if(R == 3)
      return 170;
    else
      return 200;
  }
  else {
    if(R == 3)
      return 190;
    else
      return 220;
  }
  return 0;
}
