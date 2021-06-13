#include<stdio.h>
#include<string.h>
#include<ctype.h>
main(){
    char a[1000],b[1000];
    printf("enter the string \n");
    gets(a);
    int len=0;
    for(len=0;a[len]!='\0';len++);
    printf("%i",len);
    for(int i=0;i<len;i++){
      
          b[len-i-1]=a[i];
      
       
    }
   printf("the string is %s\n",b);
}
