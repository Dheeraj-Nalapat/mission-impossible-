#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long int n,m,res=0;
    cin>>n>>m;
    while(n<m){
        n*=3;
        n*=2;
        n+=5;
        res++;
    }
    cout<<res<<"\n";
    return 0;
}
