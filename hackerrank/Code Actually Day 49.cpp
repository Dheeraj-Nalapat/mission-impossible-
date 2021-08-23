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
        long int g,i,q,n;
        cin>>g;
        while(g--){
            cin>>i>>n>>q;
            if(i==1 && q==1){
                cout<<(n/2)<<"\n";
            }
            else if(i==1 && q==2){
                cout<<(n+1)/2;
            }
            else if(i==2 && q==2){
                cout<<(n/2)<<"\n";
            }
            else if(i==2 && q==1){
                cout<<(n+1)/2<<"\n";
            }
        }
    }
    return 0;
}
