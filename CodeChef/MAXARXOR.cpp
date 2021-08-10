#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	long long int t;
	cin>>t;
	while(t--){
	    long long int n,k,res=0;
	    cin>>n>>k;
	    long long int x,y;
	    x=pow(2,n);
	    if(k>(x/2)){
	        res= x*(x-1);
	    }
	    else{
	        res= 2*k*(x-1);
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
