//to write a menu driven program
#include <stdio.h>
#include <stdlib.h>

void getmatrix(int r, int c, int a[100][100])
{
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int r, int c, int a[100][100])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void displaytuple(int r, int c, int a[][3])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void converttotuple(int r, int c, int a[100][100],int *p, int b[100][3])
{
    int i, j;
    b[0][0] = r;
    b[0][1] = c;
    int n=1;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(a[i][j]!=0){
                b[n][0]=i;
                b[n][1]=j;
                b[n][2]=a[i][j];
                n++;
            }
        }
    }
    b[0][2]=n-1;
    *p =n;
}

void transpose(int a[100][100])
{
    int i, j, temp;
    for (i = 1; i <= a[0][2]; i++)
    {
       temp=a[i][0];
       a[i][0]=a[i][1];
       a[i][1]=temp;
    }
}

void converttonormal(int r, int c, int a[100][100],int n, int b[100][3])
{
    int i, j; 
    r= b[0][0];
    c= b[0][1];
    for (i = 1; i <= n; i++)
    {
        a[b[i][0]][b[i][1]]=b[i][2];
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(a[i][j]!=0){
                continue;
            }
            else{
                a[i][j]=0;
            }
        }
    }
}

void filter(int a[100][3]){
    int i,j,b[100][3],n=1;
    for(i=1;i<= a[0][2];i++){
        if(a[i][2] != 0){
           b[n][0] = a[i][0];
           b[n][1] = a[i][1]; 
           b[n][2] = a[i][2];
           n++;
        }
    }
    for(j=1;j<n;j++){
        a[j][0] = b[j][0];
        a[j][1] = b[j][1]; 
        a[j][2] = b[j][2];
    }
    a[0][2]= n-1;
}

void sumoftuple(int a[100][3],int b[100][3])
{
    int c[100][3],i,j,n3;
    if(a[0][0]!=b[0][0]||a[0][1]!=b[0][1]){
        printf("The matrices are not compatible for addition\n");
        return;
    }
    int flag=0;
    c[0][0]=a[0][0];
    c[0][1]=a[0][1];
    c[0][2]=a[0][2];
    n3 = a[0][2]+1;
    for(i=1;i<=a[0][2];i++){
        c[i][0]=a[i][0];
        c[i][1]=a[i][1];
        c[i][2]=a[i][2];
    }
    for(i=1;i<=b[0][2];i++){
         flag =0;
         for(j=1;j<=c[0][2];j++){
             if(c[j][0]==b[i][0] && c[j][1]==b[i][1]){
                c[j][2] += b[i][2];
                flag = 1;
                break;
             }
         }   
         if(!flag){
            c[n3][0] = b[i][0];
            c[n3][1] = b[i][1];
            c[n3][2] = b[i][2];
            n3++;
         }
           
    }
    c[0][2] = n3-1;
    filter(c);
    printf("The sum of the matrices: \n");
    displaytuple(c[0][2]+1,3,c);
    
}   

int main(){

    int r1,r2,c1,c2,arr1[100][100],arr2[100][100],tup1[100][3],tup2[100][3],x,n1=0,n2=0,n3=0;
    do{
    printf("\n     MENU  \n");
    printf("--------------------------------------------\n");
    printf("1.Input the the matrix\n");
    printf("2.convert the matrices into tuple form \n");
    printf("3.transpose of matrix\n");
    printf("4.Convert the tuple matrix to normal matrix\n");
    printf("5.Sum of the tuple matrix\n");
    printf("6.Exit\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Enter the number of rows and columns of matrix 1\n");
        scanf("%d",&r1);
        scanf("%d",&c1);
        getmatrix(r1,c1,arr1);
        printf("Enter the number of rows and columns of matrix 2\n");
        scanf("%d",&r2);
        scanf("%d",&c2);
        getmatrix(r2,c2,arr2);
        printf("The normal form of matrix 1:\n");
        display(r1,c1,arr1);
        printf("The normal form of matrix 2:\n");
        display(r2,c2,arr2);
        break;
    case 2:
        converttotuple(r1,c1,arr1,&n1,tup1);
        printf("The tupil matrix of matrix1 is:\n");
        displaytuple(tup1[0][2]+1,3,tup1);
        converttotuple(r2,c2,arr2,&n2,tup2);   
         printf("The tupil matrix of matrix1 is:\n");
        displaytuple(tup2[0][2]+1,3,tup2); 
        
        break;
    case 3:
        transpose(tup1) ;
        printf("the transpose of matrix 1 is:\n");
        displaytuple(tup1[0][2]+1,3,tup1);
        transpose(tup2);    
        printf("the transpose of matrix 2 is:\n");
        displaytuple(tup2[0][2]+1,3,tup2);
        for (int i = 0; i < r1; i++)
        {
        for (int j = 0; j < c1; j++)
        {
            arr1[i][j] = 0;

        }
      
    }
        break;
    case 4:
        converttonormal(r1,c1,arr1,n1,tup1);
        printf("The normal form of matrix 1:\n");
        display(r1,c1,arr1);
        converttonormal(r2,c2,arr2,n2,tup2);
        printf("The normal form of matrix 2:\n");
        display(r2,c2,arr2);
        break;
    case 5:
        sumoftuple(tup1,tup2);
        break;
    case 6:
        return 0;            
    default:
        printf("Invalid Entry\n");
        break;
    }
 }while(x!=6); 
}