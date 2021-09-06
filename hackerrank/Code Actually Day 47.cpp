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
        long int p1,d1,p2,d2,r1;
        cin>>p1>>d1>>p2>>d2;
        if(p1>p2){
           r1= p1-p2;
            if(d1>=d2){
                cout<<"NO"<<"\n";
            }
            else{
                if(r1%(d2-d1)!=0){
                    cout<<"NO"<<"\n";
                }
                else{
                    cout<<"YES"<<"\n";
                }
            }
        }
        else if (p1<p2){
           r1=p2-p1;
            if(d2>=d1){
                cout<<"NO"<<"\n";
            }
            else{
                 if(r1%(d1-d2)!=0){
                     cout<<"NO"<<"\n";
                 }
                else{
                    cout<<"YES"<<"\n";
                }
            }
        }
        else{
            cout<<"YES"<<"\n";
        }
        
    }
    return 0;
}
