// Project Euler #1: Multiples of 3 and 5

#include <iostream>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
       long int n,x,y,z;
        long int s=0;
        cin>>n;
        x=(n-1)/3;
        y=(n-1)/5 ;
        z=(n-1)/15;
        s=  (x*3*(x+1)/2)+ (y*5*(y+1)/2)- (z*15*(z+1)/2);
      cout<<s<<endl;  
    }
    return 0;
}
