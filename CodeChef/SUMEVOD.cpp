#include <iostream>
using namespace std;

int main() {
	long long int  n,odd=0,even=0;
	cin>>n;
	long long int  i=1,j=2;
	for(long long int t=0;t<n;t++){
	    odd +=i;
	    even +=j;
	     i +=2;
	     j +=2;
	}
	cout<<odd<<" "<<even;
	return 0;
}
