#include <iostream>
using namespace std;

int main() {
	int flag =1,x;
	while(flag){
	    cin>>x;
    	if(x==42){
    	    flag=0;
    	}
    	if(flag==1){
    	    cout<<x<<"\n";
    	}
	}
	return 0;
}
