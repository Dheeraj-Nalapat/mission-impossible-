#include <cmath>
#include <cstdio>
#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int t;
    cin>>t;
    while(t--){
        long int x;
        double y;
        cin>>x>>y;
        if(x<=y && x%5==0){
            double res=y-x-0.50;
            printf("%0.2lf",res);
            cout<<"\n";
        }
        else{
            printf("%0.2lf",y);
            cout<<"\n";
        }
    }
    return 0;
}
