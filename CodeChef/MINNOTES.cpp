#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int gcd(ll a,ll b){
    if (a==0)
        return b;
    return gcd(b % a, a);
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
	    ll n,res;
	    cin>>n;
	    ll a[n],total=0;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
            total +=a[i];
	    }
        
        if(n==1){
            cout<<1<<"\n";
        }
        else{
        ll forward[n],reversed[n];
        ll var1=a[0];
        for(ll i=0;i<n;i++){
            forward[i]= __gcd(a[i],var1);
            var1=forward[i];
        }
        ll var2=a[n-1];
        for(ll i=n-1;i>=0;i--){
            reversed[i]=__gcd(a[i],var2);
            var2=reversed[i];
        }
        res = total/reversed[0];
        ll denom;
	    for(ll i=0;i<n;i++){
            if(i==0){
                denom=reversed[i+1];
            }
            else if(i==n-1){
                denom=forward[i-1];
            }
            else{ 
                denom=__gcd(forward[i-1],reversed[i+1]); 
            }                 
            ll cont = total;
	        ll temp=(cont-a[i]+denom)/denom;
	        if(temp<res){
	            res=temp;
	        }
	    }
	    cout<<res<<"\n";
	 }
	}
	return 0;
}
