#include <iostream>

using namespace std;

int main(){
    long int t;
    cin >> t;
    while(t--){
        long long int g;
        cin >> g;
        while(g--){
            long long int i,n,q;
            cin >>i >> n >> q;
            long long int var1=0,var2=0;
            if(n%2==0){
                var1=n/2;
                var2=n/2;
            }
            else{
                var1=(n+1)/2;
                var2=n/2;
            }
            if(i==1){
                long long int temp=var1;
                var1= var2;
                var2=temp;
            }
            if(q==1){
                cout << var1 << endl;
            }
            else if(q==2){
                cout << var2 << endl;
            }
        }
    }
    return 0;
}