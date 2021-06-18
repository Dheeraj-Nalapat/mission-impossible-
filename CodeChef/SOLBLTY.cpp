#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,b,a;
	    cin>>x>>a>>b;
	    cout<<10*a+(10*b*(100-x))<<endl;
	}
	return 0;
}
