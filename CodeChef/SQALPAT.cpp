#include <iostream>
using namespace std;

int main() {
	long int n;
	cin>>n;
	int temp=1;
	int flag=1;
	for(long int i=0;i<n;i++){
	    long int res[5];
	    for(long int j=0;j<5;j++){
	        res[j]=temp;
	        temp++;
	    }
	    if(flag==1){
    	    for(long int j=0;j<5;j++){
    	        cout<<res[j]<<" ";
    	    }
    	    flag=2;
	    }    
	    else{
    	    for(long int j=4;j>=0;j--){
    	        cout<<res[j]<<" ";
    	    }
    	    flag=1;
	    }    
	    cout<<"\n";
	}
	return 0;
}
