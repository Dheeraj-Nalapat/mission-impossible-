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
        vector<int> v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        long int temp=0;
        while(v.size() !=1)
            for(auto i = v.begin();i != v.end();++i){
                if(temp==1){
                    v.erase(i);
                    i--;
                    temp=0;
                }
                else{
                    temp=1;
                }
            }
        for(auto i = v.begin();i != v.end();++i){
            cout<<*i<<"\n";
        }
    }
    return 0;
}
