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
        int n;
        cin>>n;
        int temp=n%8;
        if(3<temp && temp<7){
            switch(temp-3){
                case 1:
                    cout<<n-3<<"LB"<<"\n";
                    break;
                case 2:
                    cout<<n-3<<"MB"<<"\n";
                    break;
                case 3:
                    cout<<n-3<<"UB"<<"\n";
                    break;    
            }
         }
        else if(temp<4){
            switch(temp){
                case 1:
                    cout<<n+3<<"LB"<<"\n";
                    break;
                case 2:
                    cout<<n+3<<"MB"<<"\n";
                    break;
                case 3:
                    cout<<n+3<<"UB"<<"\n";
                    break;    
            }
        }
        else{
            switch(temp){
                case 7:
                    cout<<n+1<<"SU"<<"\n";
                    break;
                case 0:
                    cout<<n-1<<"SL"<<"\n";
                    break;
            }
        }
    }
    return 0;
}
