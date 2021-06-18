#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,m,d,res=0;
	    cin>>x>>m>>d;
	    if((m*x-x)>d){
	        res=x+d;
	    }
	    else{
	        res=m*x;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
