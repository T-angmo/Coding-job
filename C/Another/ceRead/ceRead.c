#include<stdio.h>
#include<stdlib.h>

int main() {

    char *buffer;
    int i, count1=0, count2=0;
    FILE *fp = fopen("ce.html", "r");
    if (fp == NULL) {   
        printf("Error! Could not open file\n"); 
        exit(-1); // must include stdlib.h 
    }
    else {
        // Get the file length
        fseek(fp, 0, SEEK_END);
        long length = ftell(fp);
        fseek(fp, 0, SEEK_SET); //Seek to the beginning of the file

        // Create the string for the file contents.
        buffer = (char *)malloc(sizeof(char) * (length+1));     //จองพื้นที่
        buffer[length] = '\0';      //ปิดท้าย

        fread(buffer, sizeof(char), length, fp);
        
        for(i=0; buffer[i] != '\0'; i++) {
            if(buffer[i] == '<') {
                if(buffer[i+1] == 'a') {
                    count1++;
                }
                if(buffer[i+1] == 'i' && buffer[i+2] == 'm' && buffer[i+3] == 'g') {
                    count2++;
                }
            }
        }
        printf("Number of <a = %d\nNumber of <img = %d", count1, count2);
    }
    fclose(fp);

    return 0;
}