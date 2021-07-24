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
        long int n;
        cin>>n;
        long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=0,count=0;
        for(int i=1;i<n;i++){
            if(a[i-1]!=a[i]){
                if(flag==0){
                    count +=2;
                }
                else{
                    count++;                    
                }
                flag=1;
            }
            else{
                flag=0;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
