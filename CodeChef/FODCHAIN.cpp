#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>> t;
	while(t--){
	    long long int e,k,res=0;
	    cin>>e>>k;
	    while(e){
	        e=e/k;
	        res++;
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
