#include <iostream>
using namespace std;

int main() {
    int x,i=10,count=0;
    cin>>x;
    do{
        if(x%i==0){
            cout<<i<<endl;
             count++;
        }
        i--;
    }while(count==0);
	return 0;
}
