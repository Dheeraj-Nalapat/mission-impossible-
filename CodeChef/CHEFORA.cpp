#include <iostream>
#include <algorithm>
#include <cmath>
#define ll long long int 
using namespace std;

ll  cumalative[100000],chefora[100000];

int reverse(ll n){
    ll reversedNumber = 0, remainder;
    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}    

int power(ll x, unsigned ll y)
{  
    ll p = 1000000007;
    int res = 1;
    x = x % p; 
  
    if (x == 0) 
      return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;
    }
    return res%p;
}

int Digit(ll n){
    ll count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

ll A(ll i){
    ll n=Digit(i);
    ll res;
    if(n!=1){
        ll temp = i/10;
        res = (i*power(10,n-1)) + reverse(temp);
    }
    else{
        res=i;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    cumalative[-1]=0;
    for(ll i=0;i<=100000;i++){
        chefora[i]=A(i);
        cumalative[i] = cumalative[i-1]+chefora[i];
    }
	ll t;
	cin>>t;
	while(t--){
	    ll l,r;
	    cin>>l>>r;
	    ll var1 = cumalative[r]-cumalative[l];
	    ll res = (power(chefora[l],var1))%1000000007;
	    cout<<res<<"\n";
	}
	return 0;
}	
