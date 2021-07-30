#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n;
        long long int tot=0,res=0;
        for(long long int i=0;i<n;i++){
            cin>>k;
            tot +=k;
        }
        if(tot<=0){
            res=1;
        }
        else if(tot !=n){
            res=tot-n;
        }
        cout<<res<<"\n";
    }
    return 0;
}
