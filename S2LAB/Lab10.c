#include<stdio.h>
#include<string.h>
#include<ctype.h>
main(){
    char a[1000];
    int i=0,j=0,v=0,total=0,t;
    printf("enter the string ending with $\n");
    gets(a);
    toupper(a);
    for( t=0;a[t]!='$';t++){
       if(a[t]=='a'){
          v++;
       }
       else if(a[t]=='e'){
          v++;
       }
       else if(a[t]=='i'){
          v++;
       }
       else if(a[t]=='o'){
          v++;
       }
       else if(a[t]=='u'){
          v++;
       }
       else if(a[t]=='A'){
          v++;
       }
       else if(a[t]=='E'){
          v++;
       }
       else if(a[t]=='I'){
          v++;
       }
       else if(a[t]=='O'){
          v++;
       }
       else if(a[t]=='U'){
          v++;
       }
       else if(a[t]==' '){
          j++;
       }
       else{
         i++;
       }
      
    }
       
    printf("the number of vowels is %i\n",v);
    printf("the number of  spaces is %i\n",j);
    printf("the number of consanants is %i\n",i);
   
}
