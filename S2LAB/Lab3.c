#include<stdio.h>
main(){
    int a;
    printf("enter a numbers\n");
    scanf("%i",&a);
    int flag=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            flag=0;
        }
    }
    if(flag == 0){
    printf("%i is not prime\n",a);
    }
    else{
    printf("%i is prime\n",a);    
    }
}
