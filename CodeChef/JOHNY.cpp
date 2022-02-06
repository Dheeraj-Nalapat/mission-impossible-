#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>k;
        k = k-1;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    if(j==k){
                        k++;
                    }
                    else if(j+1 == k){
                        k--;
                    }
                    int temp =a[j];
                    a[j] = a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        k = k+1;
        cout<<k<<"\n"; 
        
    }
	return 0;
}
