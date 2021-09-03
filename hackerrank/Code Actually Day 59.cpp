#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    if(n%2==0){
        cout<<(n/2+1)*(n/2+1)<<"\n";
    }
    else{
        int x=(n/2)+1;
        cout<<2*x*(x+1)<<"\n";
    }
    return 0;
}
