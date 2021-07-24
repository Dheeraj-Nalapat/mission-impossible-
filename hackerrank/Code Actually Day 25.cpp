#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n;
    cin>>n;
    for(long int i=1;i<=n;i++){
        for(long int j=0;j<(2*n);j++){
            if(j<n){
            if(i>j)
                cout<<"*";
            else
                cout<<" ";}
            else{
            if(i<2*n-j)
                cout<<" ";
            else
                cout<<"*";}
        }
        cout<<"\n";
    }
    for(long int i=0;i<n;i++){
        for(long int j=0;j<(2*n);j++){
            if(j<n){
            if(i<n-j)
                cout<<"*";
            else
                cout<<" ";}
            else{
            if(i+n>j)
                cout<<" ";
            else
                cout<<"*";}
        }
        cout<<"\n";
    }
    return 0;
}
