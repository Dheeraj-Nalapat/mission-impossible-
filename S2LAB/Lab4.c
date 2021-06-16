#include<stdio.h>
#include<math.h>
main(){
    int a,b;
    printf("enter a number\n");
    scanf("%i",&a);
    b =a;
    int flag=1,temp,sum=0,order;
    order= (int)log10(a)+1;
     while(a>0){
        temp=a%10;
        sum += pow(temp,order);
        a=a - temp;
        a = a/10;
    }
    
    if(sum == b){
    printf("%i is an Armstrong\n",b);
    }
    else{
    printf("%i is not an Armstrong\n",b);    
    }
}
