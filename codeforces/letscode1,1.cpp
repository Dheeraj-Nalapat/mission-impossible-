#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3,x4;
        cin>>x1>>x2>>x3>>x4;
        //cout<<x1;
        if((x1>x3 && x1>x4)&&(x2>x3 && x2>x4)){
        
                cout<<"NO"<<endl;
            
        }
        else if((x3>x1 && x3>x2)&&(x4>x1 && x4>x2)){
                 
                     cout<<"NO"<<endl;
                 
            }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
