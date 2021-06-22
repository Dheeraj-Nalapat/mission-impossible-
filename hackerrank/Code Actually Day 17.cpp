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
        int l,count=1,res=1;
        cin>>l;
        string str;
        cin>>str;
        for(int i=0;i<l;i++){
            if(str[i]+1==str[i+1]){
                count++;
                if(res<count){
                    res=count;
                    }
            }
            else{
                count=1;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
