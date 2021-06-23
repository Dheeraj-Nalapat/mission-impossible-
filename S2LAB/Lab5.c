#include<stdio.h>
main(){
    int n;
    printf("enter the number of elements in thee array\n");
    scanf("%i",&n);
    float a[n],sum=0;
    float avg=0;
    for(int i=0;i<n;i++){
        scanf("%i",&a[i]);
        sum += a[i];
    }
    avg=sum/n;
    printf("sum of the array is %f , average of the array is %f",sum,avg);
}
