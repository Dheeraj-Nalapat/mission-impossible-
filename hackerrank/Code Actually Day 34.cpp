#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int mode(long long int x){
    x = x*x;
    x = sqrt(x);
    return x;
}

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int xa,ya,xp,yp,xh,yh;
        cin>>xa>>ya>>xp>>yp>>xh>>yh;
        long long int res=0;
        long long int X=xa-xp , Y=ya-yp;
        res = mode(X)+mode(Y);
        if(xa==xh && ya==yh){
            res = 0;
        }
        else if (xa == xh && xh == xp && ((yh<ya && yh>yp) || (yh>ya && yh<yp))){
            res = res+2;
        }
        else if (ya == yh && yh == yp && ((xh<xa && xh>xp) || (xh>xa && xh<xp))){
            res = res+2;
        }
        cout<<res<<"\n";
    }
    return 0;
}
