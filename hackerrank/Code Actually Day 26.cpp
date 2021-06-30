#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    long int t;
    char one='1';
    cin>>t;
    while(t--){
        int l,g;
        cin>>l>>g;
        string str;
        cin>>str;
        int b=l;
        int n=str.length();
        for(int i=0;i<n;i++){
             if(g>=(l+1)/2){
                cout<<"HEAVEN "<<l<<"\n";
                break;
            }
            l++;
            if(str[i]==one){
                g++;
            }
            if(l==n+b){
                cout<<"HELL"<<"\n";
            }
           
        }
    }
    return 0;
}
