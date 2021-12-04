#include<stdio.h>
#include<string.h>

int main(){
    FILE *fp;
    fp = fopen("File.txt","w");
    if(!fp){
        printf("Error opening file");
    }
    char st1[100],st2[100];
    printf("Enter the string to be searched : ");
    fflush(stdin);
    gets(st1);
    int length = strlen(st1);
    int count = 0,pos = 0;
    for(int i=0;!feof(fp);i++){
        fgets(st2,length+1,fp);
        if(feof(fp)){
            char remaining;
            while(1){
                remaining = fgetc(fp);
                if(feof(fp)){
                    break;
                }
                fputc(remaining,fp);
            }
            break;
        }
        if(strcmp(st1,st2)==0){
            count++;
            if(count == 1){
                fprintf(fp,"%s",st1);
            }
            i += length-1;
        }
        else{
            fputc(st1[0],fp);
        }
        fseek(fp,i+1,SEEK_SET);
    }
    printf(" %s occurs %d times in the file",st1,count);
    fclose(fp);
    return 0;
}        