#include<stdio.h>
main(){
    char a[1000],b[100],c[200];
    int i=0,j=0;
    printf("enter the string 1 ending with $\n");
    gets(a);
    printf("enter the string 2 ending with $\n");
    gets(b);
    for(int t=0;a[t]!='\0';t++){
        if(a[j]!='$'){
            c[i]=a[j];
            i++;
            j++;
        }
    }
    j=0;
    for(int t=0;b[t]!='\0';t++){
        if(b[j]!='$'){
            c[i]=b[j];
            i++;
            j++;
        }
    }   
    printf("the concatinated word is %s\n",c);
   
}
