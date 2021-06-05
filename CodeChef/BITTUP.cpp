#include <iostream>
using namespace std;

/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(long long x, unsigned int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

//This function from geeks for geeks;
//link :     https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,r;
	    cin>>n>>m;
	    r= power(power(2,n,1000000007)-1,m,1000000007);
	    cout<<r<<endl;
	}
	return 0;
}
