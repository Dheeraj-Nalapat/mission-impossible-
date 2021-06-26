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
        int n,count=0;
        float avg=0 ,sum=0;
        cin>>n;
        int m[n];
        for(int i=0;i<n;i++){
            cin>>m[i];
            sum += m[i];
        }
        avg=sum/n;
        for(int i=0;i<n;i++){
            if(m[i]<avg){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
