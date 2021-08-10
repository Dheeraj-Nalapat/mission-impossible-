#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int a,b;
        cin>> a >> b;
        long long int mini,maxi,res=0;
        if(a>b){
            maxi=a;
            mini=b;
        }
        else{
            maxi=b;
            mini=a;
        }
        for(long long int x=mini;x<=maxi;x++){
            long double X=(b-x)/2,Y=(x-a)/2;
            if(X%1!=0){
                X= (long long int)X+1;
            }
            if(Y%1!=0){
                Y= (long long int)Y+1;
            }
            long long int temp = X +Y;
            if(res<temp){
                res=temp;
            }
        }
        cout<<res<<endl;
    }
}