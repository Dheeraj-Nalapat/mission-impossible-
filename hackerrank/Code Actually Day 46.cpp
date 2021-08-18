#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int res=0,temp=n;
        for(long long int i=1;i<n;i++){
            if(res<(n%i)){
                res=n%i;
                temp=i;
            }
        }
        cout<<temp<<"\n";
    }
    return 0;
}
