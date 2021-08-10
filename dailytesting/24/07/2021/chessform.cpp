#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c=a+b;
        if(c<3){
            cout<<1<<"\n";
        }
        else if(c<=10){
            cout<<2<<"\n";
        }
        else if(c<=60 && c>=11){
            cout<<3<<"\n";
        }
        else if(c>60){
            cout<<4<<"\n";
        }
    }
    return 0;
}