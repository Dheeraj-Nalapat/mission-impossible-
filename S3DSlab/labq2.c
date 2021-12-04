#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp,*ft;
    fp = fopen("File.txt","w+");
    if(!fp){
        printf("Error opening file");
    }
    char st1[100],st2[100],st3[200]={""},st4[4]={" "};
    gets(st1);
    int count = 0,pos = 0;
    while(!feof(fp)){
        pos++;
        fscanf(fp,"%s",st2);
        //printf("%s ",st2);
        if(!strcmp(st1,st2)){
            ft = fp;
            count++;
            if(count == 1){
                printf("Position of first :%d",pos);
                strcat(st3,st2);
                strcat(st3,st4);
            }
        }
        else{
            strcat(st3,st2);
            strcat(st3,st4);
        }
    }
    fprintf(fp,"%s",st3);
    printf(fp,"%s",st3);
    fclose(fp);
    printf("the word count: %d",count);
}