#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int t,x,y;
    string str1;
    cin>>t;
    cin>>str1;
    cin>>x>>y;
    while(t--){
        string str;
        int s=0,a=0;
        cin>>str;
        for(auto i:str){
            if(str1.find(i)<str1.length()){
                s+=x;
            }
            else{
                a+=y;
            }
        }
      if(a>s){
          cout<<"ANURADHA"<<"\n";
      }  
      else if(a==s){
          cout<<"DRAW"<<"\n";
      }  
      else {
          cout<<"SARTHAK"<<"\n";
      }  
    }
    return 0;
}

