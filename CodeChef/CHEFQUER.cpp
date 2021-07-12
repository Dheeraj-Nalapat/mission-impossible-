#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
	long int n,q;
	cin>>n>>q;
	long int se[n];
	for(long int i=1;i<=n;i++){
	    cin>>se[i];
	}
	long int x,l,r,y,k;
	while(q--){
	    cin>>k;
	    if(k==1){
	        cin>>l>>r>>x;
	        for(long int i=l;i<=r;i++){
	            se[i] += (x+i-l)*(x+i-l);
	        }
	    }
	    else if(k==2){
	        cin>>y;
	        cout<<se[y]<<"\n";
	    }
	}
	return 0;
}
