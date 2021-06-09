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
        string str1,str2;
        cin>>str1;
        cin>>str2;
        int temp=-1;
        bool flag=false;
        for(int i=0;i<str1.size();i++){
            int diff= (str2[i]-str1[i]+26)%26;
            if(temp==-1){
                temp = diff;
            }
            if(temp==diff){
                continue;
            }
            else{
                flag=true;
                break;
            }
        }
        if(flag==true){
            cout<<"-1"<<endl;
        }
        else{
            cout<<temp<<endl;
        }
    }
    return 0;
}
