// finding factoriL of a number using non recursive method
#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int res = 1;
    for(int i = 1; i <= n; i++){
        res = res*i;
    }
    printf("%d! = %d", n, res);
    return 0;
}