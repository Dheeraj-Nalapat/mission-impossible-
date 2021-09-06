#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int exchange(long long int n){
   while(n!=0){
       long long int temp1=exchange(n/2),temp2=exchange(n/3),temp3=exchange(n/4);
       long long int  temp=temp1+temp2+temp3;
            if(n>temp){
                return n;
            }
            else{
                return temp;
            }
  }
    return n;
}

int main() {
    long long int n;
    while(cin>>n){
        long long int temp=exchange(n);
        if(n>temp){
            temp=n;
        }
        cout<<temp<<"\n";
    }
    return 0;
}
