#include<stdio.h>
// use pointers to input and display elements of an array

void main(){
    int a[101], n, *ptr;
    ptr = a;
    printf("\n\n\n\nQ18 - Input and Print the elements of an array using pointers.\n\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
        scanf("%d", ptr++);
    printf("The array elements are: ");
    ptr = a;
    for(int i=0; i<n; i++)
        printf("%d ", *ptr++);
    getch();
}
