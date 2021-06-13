#include<stdio.h>
main(){
    char a[100];
    printf("enter the string\n");
    gets(a);
    int len=0;
    for(len=0;a[len]!='\0';len++);
    int flag=0;
    for(int i=0;i<=len/2;i++){
        if(a[i]!=a[len-i-1]){
           flag =1;
        }
    }
    if(flag==1){
        printf("%s is not a palindrome\n",a);
    }
    else{
        printf("%s is a palindrome\n",a);
    }
}
