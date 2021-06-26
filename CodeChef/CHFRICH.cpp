#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,x;
	    cin>>a>>b>>x;
	    int res=0;
	    while(a<b){
	        a+=x;
	        res++;
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
