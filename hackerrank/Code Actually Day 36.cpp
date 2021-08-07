#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int res=0;
    for(int i=1;i<=n;i++){
        if(a[i]>=a[k] && a[k]>=0){
            res++;
        }
    }
    cout<<res<<"\n";
    return 0;
}
