#include <iostream>
#define ll long long int 
using namespace std;

int main() {
	 ll x,y,z;
	cin>>x>>y>>z;
	if(x==y&&y==z){
	    cout<<1<<"\n";
	}
	else if(x<y+z && y<x+z && z<x+y && x!=0 && y!=0 && z!=0){
	    if(x==y || y==z || z==x){
	        cout<<2<<"\n";
	    }
	    else{
	        cout<<3<<"\n";
	    }
	}
	else{
	    cout<<-1<<"\n";
	}
	return 0;
}
