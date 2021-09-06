// 20. Create a file and perform the following
// a. Write data to the file
// b. Read the data in a given file & display the file content on console
// c. append new data and display on console


#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    char ch;
    
    fp = fopen("file.txt","w");
    if(fp == NULL){
        printf("File not found");
        exit(0);
    }
    printf("\n\nEnter the data to be written to the file:\n");
    while((ch = getchar()) != '\n'){
        fputc(ch,fp);
    }
    fclose(fp);

    fp = fopen("file.txt","r");
    printf("\n\nThe content of the file is: \n");
    while((ch = fgetc(fp)) != EOF){
        printf("%c",ch);
    }
    fclose(fp);

    fp = fopen("file.txt","a");
    getch();
    printf("\n\nEnter the data to be appended to the file:\n");
    while((ch = getchar()) != '\n'){
        fputc(ch,fp);
    }
    fclose(fp);

    fp = fopen("file.txt","r");
    printf("\n\nThe content of the file is:\n");
    while((ch = fgetc(fp)) != EOF){
        printf("%c",ch);
    }
    fclose(fp);
}