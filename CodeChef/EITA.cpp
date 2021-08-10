#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int d,x,y,z;
	    cin>>d>>x>>y>>z;
	    int sum1=d*y + z*(7-d);
	    if(sum1>7*x){
	        cout<<sum1<<"\n";
	    }
	    else{
	        cout<<7*x<<"\n";
	    }
	}
	return 0;
}
