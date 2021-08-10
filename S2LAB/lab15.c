#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct employee
{
    char name[100];
    int employee_ID;
    float weight;
};

struct employee inputing(){
    struct employee t;
    printf("Enter  employee ID ,name , Weight\n");
    scanf("%i %s %f",&t.employee_ID,t.name,&t.weight);
    return t;
}

void outputing(int p,struct employee e[100],int t){
    if(p==0){
        printf("NO DATA ENTERED YET ON THAT ID\n");
    }
    else{
        for(int n=1;n<=p;n++){
            if( t==e[n].employee_ID){
                printf("\n");
                printf("   employee    %i\n",n);
                printf("employee_ID: %i\n",e[n].employee_ID);
                printf("Name: %s\n",e[n].name);
                printf("Weight: %f\n",e[n].weight);
                printf("\n");
            }
        }
    }
}

int main(){
    int temp,n=0,s=1;
    struct employee emp[100];
    while(s){
        printf("\n");
        printf(" 1 to add a new employee\n 2 to display eployees\n 3 to exit\n");
        printf("===============================================\n");
        scanf("%i",&temp);
        if(temp==1){
            n = n+1;
            emp[n]=inputing();
        }
        else if(temp==2){
            int var1;
            printf("Enter the employee ID you want to search\n");
            scanf("%i",&var1);
            outputing(n,emp,var1);
        }
        else if(temp==3){
            s=0;
        }
    }
    return 0;
}