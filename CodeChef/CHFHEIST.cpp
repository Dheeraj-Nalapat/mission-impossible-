#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int D,P,d,Q,x,r;
        cin>>D>>d>>P>>Q;
        x=D/d;
        r=d*(x*(2*P+(x-1)*Q))/2+(P+x*Q)*(D-x*d);
        cout<<r<<endl;
    }
	return 0;
}
