#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int res,x,j=0;
	    cin>>res;
	    do{
	        if(res%10==4){
	            j++;
	        }
	        res =res/10;
	    }while(res !=0);
	    cout<<j<<endl;
	}
	return 0;
}
