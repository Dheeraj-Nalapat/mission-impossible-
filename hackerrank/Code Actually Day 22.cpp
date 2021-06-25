#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long int x=0;

void rotate(int arr[],int n){
  int temp = arr[1];
  long int i;  
    for (i = 1; i <=n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n] = temp;    
}

void check(int arr[],long int n){
    int flag=0;
    if(x==n){
        cout<<"NO"<<"\n";
        x=0;
        return;
    }
    for(long int i=1;i<=n;i++){
        if(arr[i-1]>arr[i]){
            flag=0;
            break;
        }
        else{
            flag=1;
        }
    }
    if(flag==1){
       cout<<"YES"<<"\n";
    }
    else{
    x++;  
    rotate(arr,n);
    check(arr,n);
    }
  
}



 int main() {
    int t;
    cin>>t;
    while(t--){
    long int n;
    cin>>n;
    int a[n];
    a[0]=-2000;    
    for(long int i=1;i<=n;i++){
        cin>>a[i];
    }
    check(a,n);    
    }
    return 0;
}
