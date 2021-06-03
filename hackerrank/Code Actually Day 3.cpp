#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int nthterm(int a, int c, int n);

int main() {
    int t;
    cin>> t;
    while(t--){
        int a,c,n;
        cin>>a>>c>>n;
        cout<< nthterm(a,c,n)<<endl;
    }
    return 0;
}

int nthterm(int a, int c, int n ){
    int res ;
    res=a;
    for(int i=1;i<n;++i){
        res = res*c;
    }
    return res;
}
