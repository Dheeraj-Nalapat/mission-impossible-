#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int minimum(long int a,long int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}


int main() {
    int t;
    cin>>t;
    while(t--){
        long int a,b;
        cin>>a>>b;
        int res=0;
        while(a!=0 && b!=0){
            if(a<b){
                b=b-a;
            }
            else if(b<a){
                a=a-b;
            }
            else if(a==b){
                a=a-b;
            }
            res++;
        }
        cout<<res<<"\n";
    }
    return 0;
}
