#include <iostream>
using namespace std;

int main() {
	int L,M,N;
	cin>>L;
	cin>>M>>N;
	while(M--){
	    int t=0,x,y,n[N];
	     unsigned int z[N][N];
	      for(int i=0;i<N;i++){
	       for(int j=0;j<N;j++){       
	       z[i][j]=L+1;
	    }}
	     
	    for(int i=0;i<N;i++){
	        cin>>n[i];
	    }
	    for(int i=0;i<N;i++){
	        x=n[i];
	    for(int j=0;j<N;j++){
	        y=n[j];
	        if(x==y && i!=j){
	            z[i][j]=j-i;
	        }
	    } 
	    }
	     for(int i=0;i<N;i++){
	         for(int j=0;j<N;j++){   
	         if( z[i][j]<=L){
	             t++;}
	              
	         }
	     }
	    
	           
	           
	           if(t>0){
	               cout<<"LUCKY"<<endl;
	               
	           } 
	           else{
	               cout<<"NOT LUCKY"<<endl;
	           }
	         
	     
	}
}
