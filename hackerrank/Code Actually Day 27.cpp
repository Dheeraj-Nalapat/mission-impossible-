#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int a[n],count=0,flag1=1,flag2=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                if(flag1==0){
                    count +=i;
                    flag1=1;
                }
                else{
                    count +=flag2;
                }
            }
            else if(a[i]==1){
                flag1=0;
                flag2=i+1;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
