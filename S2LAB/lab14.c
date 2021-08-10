#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// use structure to enter and show (name,employee id,salary)

struct employee
{
    char name[100];
    char employee_ID[100];
    long int salary;
};

struct employee inputing(){
    struct employee t;
    printf("Enter name , employee ID , Salary\n");
    scanf("%s %s %i",t.name,t.employee_ID,&t.salary);
    return t;
}

void outputing(int p,struct employee e[100]){
    if(p==0){
        printf("NO DATA ENTERED YET\n");
    }
    else{
        for(int n=1;n<=p;n++){
            printf("employee %i\n",n);
            printf("name: %s\n",e[n].name);
            printf("employee_ID: %s\n",e[n].employee_ID);
            printf("salary: %i\n",e[n].salary);
            printf("\n");
        }
    }
}

int main(){
    int temp,n=0,s=1;
    struct employee emp[100];
    while(s){
        printf("\n");
        printf(" 1 to add a new employee\n 2 to display all eployees\n 3 to exit\n");
        printf("===============================================\n");
        scanf("%i",&temp);
        if(temp==1){
            n = n+1;
            emp[n]=inputing();
        }
        else if(temp==2){
            outputing(n,emp);
        }
        else if(temp==3){
            s=0;
        }
    }
    return 0;
}
