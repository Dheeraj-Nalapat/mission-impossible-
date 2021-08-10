#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    long long int t;
    cin >> t;
    while(t--){
        double a,b;
        cin>> a >> b;
        long long int mini,maxi,res= -1000000;
        if(a>b){
            maxi=a;
            mini=b;
        }
        else{
            maxi=b;
            mini=a;
        }
        long long int x= mini,y=mini+1;
        long long int X=ceil((b-x)/2)+ceil((x-a)/2);
        long long int Y=ceil((b-y)/2)+ceil((y-a)/2);
        if(mini==maxi){
            res=0;
        }
        else if(Y>X){
            res=Y;
        }
        else{
            res=X;
        }
        cout<<res<<"\n";
    }
}
