#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int t;
    cin>>t;
    while(t--){
        int x,a,b;
        cin>>x>>a>>b;
        cout << ((a*10)+((b)*(100-x))*10)<<"\n";    
    }
    return 0;
}
