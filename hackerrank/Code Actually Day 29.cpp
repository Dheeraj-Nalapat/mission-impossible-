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
        string str1;
        cin>>str1;
        int count=0,flag=0;
        int n=str1.length();
        for(int i=0;i<n;i++){
            if(str1[i]=='1'){
                if(flag==1){
                    continue;
                }
                else{
                    count++;
                    flag=1;
                }
            }
            else if(str1[i]=='0'){
                flag =0;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
