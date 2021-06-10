#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    
        long int n;
        cin>>n;
        long int arr[n],max=0,amt[n],temp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            
		/*for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}*/
		amt[i]=arr[i]*(n-i);
		    if(amt[i]>max){
		        max=amt[i];
        }
        }
/*	for(int i=0;i<n;i++){
		    amt[i]=arr[i]*(n-i);
		    if(amt[i]>max){
		        max=amt[i];
		    }
		}*/
	
		cout<<max<<endl;
		 
	return 0;
}
