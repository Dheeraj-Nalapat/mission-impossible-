#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void group(int a[],int n,int i){
    int flag=1;
     int b[i];
    for(int j=0;j<n;j+=i){
        if(flag==0){
            for(int x=0;x<i;x++){
                b[x]=a[j];
                j++;
            }
            --j;
            for(int x=0;x<i;x++){
                a[j]=b[x];
                j--;
            }
            j++;
            flag=1;
        }
        else{
            flag=0;
        }
    }
}

int main() {
    int a,n;
    cin>>a;
    n=pow(2,a);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i;
    }
    for(int i=2;i<n;i=i*2){
        group(arr,n,i);
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}
