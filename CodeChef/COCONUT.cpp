#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,X,Y,l;
        cin>>x>>y>>X>>Y;
        l=(X/x)+(Y/y);
        if((X%x) !=0){
            l=l+1;
            }
         if((Y%y) !=0){
            l=l+1;
            }    
         cout<<l<<endl;    
    }
	return 0;
}
