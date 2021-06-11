//Project Euler #2: Even Fibonacci numbers

#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,a1,a2;
        cin>>n;
        long long int a=0,sum=0;
        a1=1;
        a2=1;
        
        while (a2+a1<n){
            a=a1+a2;
            //cout<<a<<endl;
            if(a%2==0){
                sum += a;
               }
            a1=a2;
            a2=a;
        }
       
        
        cout<<sum<<endl;
    }
    return 0;
}
