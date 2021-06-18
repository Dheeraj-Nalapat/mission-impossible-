#include <iostream>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	if(x==y || x==z){
	    cout<<"YES"<<endl;
	}
	else if(z==y){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	return 0;
}
