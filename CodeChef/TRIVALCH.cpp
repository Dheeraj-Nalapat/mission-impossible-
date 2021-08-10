#include <iostream>
using namespace std;

int main() {
	int x1,x2,x3;
	cin>>x1>>x2>>x3;
	int y1=x2+x3,y2=x3+x1,y3=x1+x2;
	if(y1>x1 && y2>x2 && y3>x3 && x1!=0 && x2!=0 &&x3!=0){
	    cout<<"YES"<<"\n";
	}
	else{
	    cout<<"NO"<<"\n";
	}
	return 0;
}
