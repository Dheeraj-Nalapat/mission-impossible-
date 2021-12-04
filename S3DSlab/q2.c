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
    printf("The matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void converttotuple(int r, int c, int a[100][100],int n, int b[100][3])
{
    int i, j;
    b[0][0] = r;
    b[0][1] = c;
    n=0;
    for (i = 1; i < r; i++)
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
    b[0][2]=n;
}

void transpose(int r, int c, int a[100][100])
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

void sumoftuple(int a[100][3],int b[100][3])
{
    int c[100][3],i,j,n3;
    if(a[0][0]!=b[0][0]||a[0][1]!=b[0][1]){
        printf("The matrices are not compatible for addition\n");
        return;
    }
    else{
        c[0][0]=a[0][0];
        c[0][1]=a[0][1];
        c[0][2]=a[0][2];
        for(i=1;i<=a[0][2];i++){
            c[i][2]=a[i][2];
        }
        for(i=1;i<=b[0][2];i++){
            for(j=1;j<=c[0][2];j++){
                 if(c[j][0]==b[i][0]&&c[j][1]==b[i][1]){
                     c[i][2]=c[i][2]+b[i][2];
                     break;
                    }
                  else{
                        c[0][2]++;
                        
                  }  
            }
           
        }
    }
}   

int menu(){
    printf("\n  MENU  \n");
    printf("--------------------------------------------\n");
    printf("1.Input the first array");
    printf("2.Input the second array");
    printf("3.convert the matrices into tuple form ");
    printf("4.Display the matrix");
    printf("5.transpose of matrix");
    printf("6.Convert the tuple matrix to normal matrix");
    printf("7.Sum of the tuple matrix");
    printf("8.Exit");
    int x;
    scanf("%d",x);
    return x;
}

int main(){

    int r1,r2,c1,c2,arr1[100][100],arr2[100][100],tup1[100][3],tup2[100][3],x,n1=0,n2=0,n3=0;
    x = menu();
    switch (x)
    {
    case 1:
        printf("Enter the number of rows and columns of matrix 1\n");
        scanf("%d",&r1);
        scanf("%d",&c1);
        getmatrix(r1,c1,arr1);
        break;
    case 2:
        printf("Enter the number of rows and columns of matrix 2\n");
        scanf("%d",&r2);
        scanf("%d",&c2);
        getmatrix(r2,c2,arr2);
        break;
    case 3:
        converttotuple(r1,c2,arr1,n1,tup1);
        converttotuple(r2,c2,arr2,n2,tup2);    
    default:
        break;
    }
    
    return 0;
}