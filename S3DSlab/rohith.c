#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;
    fp = fopen("FileB.txt","r");
    if(!fp){
        printf("Error opening file");
    }
    char st1[100],st2[100];
    gets(st1);
    int count = 0,pos = 0;
    while(!feof(fp)){
        pos++;
        fscanf(fp,"%s",st2);
        if(!strcmp(st1,st2)){
            count++;
            if(count == 1){
                printf("Position of first :%d",pos);
            }
        }
    }
    printf("the word: %d",count);
}