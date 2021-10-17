#include <iostream>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--){
	    int a[5],e=0,i=0,d=0;
	    for(int j=1;j<=5;j++){
	        cin>>a[j];
	        if(a[j]==0){
	            d++;
	        }
	        else if(a[j]==1){
	            i++;
	        }
	        else if(a[j]==2){
	            e++;
	        }
	    }
	    if(e==i){
	        cout<<"DRAW"<<"\n";
	    }
	    else if(e>i){
	        cout<<"ENGLAND"<<"\n";
	    }
	    else if(i>e){
	        cout<<"INDIA"<<"\n";
	    }
	}
	return 0;
}
