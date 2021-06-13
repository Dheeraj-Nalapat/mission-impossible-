#include<stdio.h>
main(){
    int a,b;
    printf("enter a numbers\n");
    scanf("%i",&a);
    b =a;
    int flag=1,temp,sum=0;
     while(a>0){
        temp=a%10;
        sum += temp*temp*temp;
        a=a - temp;
        a = a/10;
    }
    
    if(sum == b){
    printf("%i is Armstrong\n",b);
    }
    else{
    printf("%i is not Armstrong\n",b);    
    }
}
