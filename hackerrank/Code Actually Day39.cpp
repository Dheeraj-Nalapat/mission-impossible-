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
        int n,YES=0,NO=0,I=0;
        cin>>n;
        char c[n];
        for(int i=0;i<n;i++){
            cin>>c[i];
            if(c[i]=='Y'){
                YES++;
            }  
            else if(c[i]=='N'){
                NO++;
            }
            else if(c[i]=='I'){
                I++;
            }
        }
        if(I==0 && YES==0){
            cout<<"NOT SURE"<<"\n";
        }
        else if(I==0 && YES>0){
            cout<<"NOT INDIAN"<<"\n";
        }
        else{
            cout<<"INDIAN"<<"\n";
        } 
    }
    return 0;
}
