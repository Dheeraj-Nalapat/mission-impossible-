#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// use structure to store points(x,y) and find length
struct point{
    int x;
    int y;
};

float length(struct point p1, struct point p2){
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}

int main(){
    struct point p1,p2;
    float length1;
    printf("Enter x1,y1\n");
    scanf("%d%d",&p1.x,&p1.y);
    printf("Enter x2,y2\n"); 
    scanf("%d%d",&p2.x,&p2.y);
    length1=length(p1,p2);
    printf("Length is %f\n",length1);
    return 0;
}