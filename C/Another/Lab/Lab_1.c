// 2
// sunny 27 46 T
// rain 30 41 F
// yes
// yes
#include<stdio.h>

int day,i;
struct Weather {
        char outlook[9];    //outlook{overcast,sunny,rain}
        int temperature;
        int humidity;
        char wind;          //wind{T,F}
}wt[5];

void playing_decision(struct Weather w);

int main() {

    printf("Enter number of day : ");
    scanf("%d", &day);
    if(day>=2 && day<=5) {
        for(i=0; i<day; i++) {
            printf("Enter outlook{overcast,sunny,rain}, temperature, humidity, wind{T,F} : ");
            scanf("%s %d %d %c", &wt[i].outlook, &wt[i].temperature, &wt[i].humidity, &wt[i].wind);
        }
        for(i=0; i<day; i++) {
            playing_decision(wt[i]);
        }
    }
    
    return 0;
}

void playing_decision(struct Weather w) {
    for(i=0; i<day; i++) {
        if(strcmp(wt[i].outlook,"overcast") == 0) {
            printf("yes");
        }
        else if (strcmp(wt[i].outlook,"rain") == 0) {
            if(wt[i].wind == 'F') {
                printf("yes");
            }
            else {
                printf("no");
            }
        }
        else if (strcmp(wt[i].outlook,"sunny") == 0) {
            if(wt[i].humidity <= 77.5) {
                printf("yes");
            }
            else {
                printf("no");
            }
        }
        printf("\n");
    }
}