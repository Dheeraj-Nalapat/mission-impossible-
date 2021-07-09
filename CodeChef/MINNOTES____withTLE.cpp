#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(long int a,long int b){
    if (a==0)
        return b;
    return gcd(b % a, a);
}

int findGCD(long int arr[], int n,int j){  
    int res=arr[n-1];
    for(int i=0;i<n;i++){
        if(i==j){
            continue;
        }
        else{
            res=gcd(arr[i],res);
        }
    }
    return res;
    
}


int notecount(long int a[],int n,int j){
    int res=findGCD(a,n,j);
    int count=0,temp;
    temp =a[j];
    a[j]=res;
    for(int i=0;i<n;i++){
       count+= a[i]/res; 
    }
    a[j]=temp;
    return count;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;
	while(t--){
	    int n,res=1000;
	    cin>>n;
	    long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        int temp=notecount(a,n,i);
	        if(temp<res){
	            res=temp;
	        }
	    }
	    cout<<res<<"\n";
	 }
	return 0;
}

