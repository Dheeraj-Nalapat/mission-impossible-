#include<stdio.h>
main(){
    printf("hello world\n");
    int x,y,z;
    printf("enter first number\n");
    scanf("%i",&x);
    printf("enter second number\n");
    scanf("%i",&y);
    printf("their sum is = %i\n",x+y);
    printf("enter the radius of the circle\n");
    scanf("%i",&z);
    printf("area of the cirlce is = %f\n",3.14*z*z);
    float a,b,c,d,e,f,g;
    printf("enter the values of a,b,c,d,e,f,g in the order\n" );
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    printf("result of ((a-b/c*d+e)*(f+g))= %f\n",((a-(b/c*d+e))*(f+g)));

}
