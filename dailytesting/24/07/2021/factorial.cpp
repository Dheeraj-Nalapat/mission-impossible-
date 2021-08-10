// finding number of zeros in factorial

#include <iostream>
#include <cmath>

using namespace std;

int findingzero(long long int n){
    long long int res =0;
    res = n/5;
    if(res!=0){
    res += findingzero(res);
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << findingzero(n) << endl;
    }
}