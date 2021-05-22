#include <iostream>
using namespace std;

int main() {
	int y,n,t;
	cin>>t;
	while(t--)
	{
	    int sum =0;
	  cin>>n;
	  for(int i=0;i<n;i+=2){
	   sum += (n-i)*(n-i);
	  }
	  cout<<sum<<endl;
	}
}
