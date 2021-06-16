#include<stdio.h>
main(){
    int a,b,c,d;
    printf("enter three numbers\n");
    scanf("%i %i %i",&a,&b,&c);
    if(a>b && a>c){
       d=a;
    }
    else if(b>a && b>c){
       d=b;
    }
    else{
       d=c;
    }
    printf("%i is the largest number\n",d);
}
