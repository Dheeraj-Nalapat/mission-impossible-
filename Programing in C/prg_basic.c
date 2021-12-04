#include<stdio.h>

main(){
    // first example
    char ch = '\t';
    printf("this is %c tab\n",ch);
    // second examole
    int a=6,b=5;
    char ch1='s';
    if (a>b) putchar(ch1);
    // third example
    int x;
    printf("\n enter a number\n");
    scanf("%d",&x);
    (x & 1)? printf("Odd"):printf("Even");   
    // Fourth example
    int k,m,n;
    m= sizeof(float);
    n=sizeof(438.23);
    printf("size of integer = %d  \n size of m = %d \n size of n = %d \n",sizeof(k),m,n);
}
