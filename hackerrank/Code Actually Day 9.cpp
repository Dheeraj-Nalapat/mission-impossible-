#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
int main() {
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int a[n];
        for(long int i=1;i<=n;i++){
            if(i==n){
                cin>>a[1];
            }                                                      Two ways of to solve the problem 
            else{
            cin>>a[i+1];
            }
        }
        for(long int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}*/




int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int temp = arr[n-1], i;
        for (i = n-1; i > 0; i--){
             arr[i] = arr[i - 1];
            }
        arr[0] = temp;
        
        
         for( i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
