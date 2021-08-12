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
        int w[5],res=0;
        for(int i=0;i<4;i++){
            cin>>w[i];
        }
        for(int i=0;i<3;i++){
            for(int j=i+1;j<4;j++){
                if(w[i]==w[j]){
                    res++;
                }
            }
        }
        if(res==6){
            cout<<0<<"\n";
        }
        else if(res==3){
            cout<<1<<"\n";
        }
        else {
            cout<<2<<"\n";
        }
    }
    return 0;
}
