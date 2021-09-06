#include<stdio.h>
// add 2 numbers using pointers
// swap two numbers using pointers function
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void main(){
    int a,b,*pa,*pb, sum=0;
    pa=&a;
    pb=&b;
    printf("\n\n\n\nQ17 - a) Add Two Numbers\n\n");
    printf("Enter 2 numbers: ");
    scanf("%d%d",pa,pb);
    sum = *pa + *pb;
    printf("\nSum is %d\n\n\n",sum);
    int x, y, *px, *py;
    px = &x;
    py = &y;
    printf("\n\n\n\nQ17 - b) Swap Two Numbers Using a Function\n\n");
    printf("Enter two numbers: ");
    scanf("%d%d", px, py);
    printf("Before swapping x = %d and y = %d\n",x,y);
    swap(px, py);
    getch();
    printf("After swapping x = %d and y = %d\n\n\n",x,y);
    getch();
}