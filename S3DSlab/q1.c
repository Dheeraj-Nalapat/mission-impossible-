#include <stdio.h>
#include <stdlib.h>

int main(){
    int polynomial1[20]={0},polynomial2[20]={0},polynomial3[20]={0},a,b,c,i;
    printf("Enter the degree of the first polynomial:");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        printf("Enter the coefficient of x^%d:",i);
        scanf("%d",&polynomial1[i]);
    }
    printf("Enter the degree of the second polynomial:");
    scanf("%d",&b);
    for(i=0;i<=b;i++){
        printf("Enter the coefficient of x^%d:",i);
        scanf("%d",&polynomial2[i]);
    }
    if(a>b){
        c=a;
    }
    else{
        c=b;
    }
    for(i=0;i<=c;i++){
        polynomial3[i]=polynomial1[i]+polynomial2[i];
    }
    printf("first polynomial is:");
    for(i=a;i>0;i--){
        printf("%dx^%d+",polynomial1[i],i);
    }
    printf("%d\n",polynomial1[0]);
    printf("second polynomial is:");
    for(i=b;i>0;i--){
        printf("%dx^%d+",polynomial2[i],i);
    }
    printf("%d\n",polynomial2[0]);
    printf("The sum of the two polynomials is:");
    for(i=c;i>0;i--){
        printf("%dx^%d+",polynomial3[i],i);
    }
    printf("%d\n",polynomial3[0]);
}