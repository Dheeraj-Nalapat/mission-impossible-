#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int l[n],r[n],p[n];
	    for(int i=0;i<n;i++){
	        cin>>l[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>r[i];
	        p[i]=r[i]*l[i];
	    }
	    int max=0,res=0,ans=0;
	    for(int i=0;i<n;i++){
	        if(p[i]>max){
	            max=p[i];
	            ans=i;
	         
	        }
	        else if(p[i]==max){
	            if(r[i]>r[ans]){
	                max=p[i];
	                ans=i;
	             
	            }
	            else if(r[i]<=r[ans]){
	                max=p[ans];
	             
	           
	            }
	        }    
	        else{ 
	        }
	    }
	    cout<<ans+1<<endl;
	}
	return 0;
}
