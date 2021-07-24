#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        long long int res=0;
        for(long long int i=0;i<n;i++)
            cin>>arr[i];       
        long long int min=arr[0];    
        for(long long int i=0;i<n;i++){
            if(arr[i]<=min){
                    min = arr[i];
                    res++;
            }
        }
        cout<<res<<endl;    
    }
}
