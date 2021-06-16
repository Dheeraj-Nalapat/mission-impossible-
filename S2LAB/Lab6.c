#include<stdio.h>
 main(){
    int n,t;
    printf("enter the number of elements in the array\n");
    scanf("%i",&n);
    int a[n],sum=0;
    float avg=0;
    for(int i=0;i<n;i++){
        scanf("%i",&a[i]);
    }
    printf("enter the number to be searched\n");
    scanf("%i",&t);
    for(int i=0;i<n;i++){
        if(a[i]==t){
            printf("element founded at index %i\n and at position %i\n",i,i+1);
        }
    }
}
