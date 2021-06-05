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
        int m[n],x;
        for(int i=0;i<n;i++){
            cin>>m[i];
        }
        cin>>x;
        int j=0;
        for(int i=0;i<n;i++){
            if(m[i]==x){
                j++;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}
