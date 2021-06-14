#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check(int x,int y,int m,int n){
   if(x==m && y==n){
     return 1;
   }
   else{
     return 0;
   }
}

int check1(int y,int m){
  if(y==m){
    return 1;
  }
  else{
    return 0;
  }
}
void read(int x, int y,int a[x][y]){
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
         scanf("%i",&a[i][j]);
    }   
  }
}
void display(int x,int y,int a[x][y]){
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
         printf(" %i ",a[i][j]);
    }
    printf("\n");   
  }
}
void sumof(int x,int y,int a[x][y],int b[x][y],int c[x][y]){

     
  for (int i = 0; i < x; ++i) {
      for (int j = 0; j < y; ++j) {
         c[i][j] = 0;
      }
   }

  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
         c[i][j] = a[i][j]+b[i][j];
    }   
  }
 display(x,y,c);
}
void transpose(int x,int y,int a[x][y]){
    int e[y][x];
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
         e[j][i] = a[i][j];
    }   
  }
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
         a[i][j] = e[i][j];
    }   
  }
  display(y,x,a);
}
void product(int x, int y ,int m, int n, int a[x][y],int b[m][n],int c[x][n]){
  
    
  
  
  for (int i = 0; i < x; ++i) {
      for (int j = 0; j < n; ++j) {
         c[i][j] = 0;
      }
   }

   // Multiplying first and second matrices and storing it in result
   for (int i = 0; i < x; ++i) {
      for (int j = 0; j < n; ++j) {
         for (int k = 0; k < m; ++k) {
            c[i][j] += a[i][k] * b[k][j];
         }
      }
   }
   display(x,n,c);
}
main(){
  int x,y,m,n,res;
  printf("enter the dimensions of 1st array\n");
  scanf("%i %i",&x,&y);
  int a[x][y];
  printf("enter the array\n");
 read(x,y,a);
 printf("enter the dimensions of 2nd array\n");
  scanf("%i %i",&m,&n);
  int b[m][n],c[x][n];
  printf("enter the array\n");
 read(m,n,b);
label1:
printf("1. transpose \n2. sum of the matrix \n3.product of the matrix\n4.exit \n enter the desired function number\n");
scanf("%i",&res);
//switch(res){
  //case 1:
  if(res==1){
     printf("transpose of array 1\n");
     transpose(x,y,a);
     printf("transpose of array 2\n");
     transpose(m,n,b);
     goto label1;}
 // case 2:
else if(res==2){
      printf("sum of arrays \n"); 
      /*int k=check(x,y,m,n);
      if(k==0){
        printf("not addable\n");
        break;
      }*/
      sumof(x,y,a,b,c); 
      goto label1;}

//  case 3:
      /*int k=check1(y,m);
      if(k==0){
        printf("not addable\n");
        break;
      }*/
    else  if(res==3){
      printf("the product of matrices\n");
      product(x,y,m,n,a,b,c);   
      goto label1;}
 // case 4:
else if(res==4){
      return 0;}       
}
 
