#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int tsum(int x);

int main() {
    int t;
    cin>>t;
    while(t--){
        int s,e,res;
        cin>>s>>e;
        res = tsum(e)-tsum(s)+s;
        cout<<res<<endl;
    }
    return 0;
}

int tsum(int x){
    int re=0;
    for(int i=0;i<=x;i++){
        re = re+i;
    }
    return re;
}
