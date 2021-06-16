#include<stdio.h>
#include<string.h>
#include<ctype.h>
main(){
    char a[1000],b[1000];
    printf("enter the string \n");
    gets(a);
    int len=0;
    for(len=0;a[len]!='\0';++len);
    for(int i=0,j=0;i<len;i++,j++){
      
          b[j]=a[len-i-1]; 
    }
   printf("the string is %s\n",b);
}
