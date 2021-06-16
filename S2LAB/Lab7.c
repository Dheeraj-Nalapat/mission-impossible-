#include<stdio.h>
main(){
    int n,temp=0;
    printf("enter the number of elements in the array\n");
    scanf("%i",&n);
    int a[n];
    float avg=0;
    printf("enter the array\n");
    for(int i=0;i<n;i++){
        scanf("%i",&a[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        if(a[i]>a[j]){
            temp = a[i];
            a[i]= a[j];
            a[j]=temp;
            }
        }
    }
    printf("the sorted array is\n");
    for(int i=0;i<n;i++){
        printf(" %i",a[i]);
    }  
}
