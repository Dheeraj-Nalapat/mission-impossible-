#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int c1=0,c2=0,count=0,i;
        for(i=0;i<a.length();i++){
            if(a[i]=='1'){
                c1++;
            }
             if(b[i]=='1'){
                c2++;
            }
             if(a[i]!=b[i]){
                count++;
            }
        }
        if(c1 == c2 && a.length()==b.length()){
            cout<<count/2<<endl;
        }
        else{
            cout<< "-1"<<"\n";
        }
        
    }
    return 0;
}
