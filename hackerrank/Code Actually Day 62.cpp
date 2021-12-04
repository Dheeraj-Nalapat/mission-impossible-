#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int digit(long long n)
{
    int count = 0;
    while (n != 0)
    {n = n / 10;
        ++count;
    }
    return count;
}

long long int F(long long int s){
    long int len=digit(s);
    long long int res=0;
        for(long long i=len-1;i>=0;i--){
            res += s/pow(10,i);
            long long int temp=s/pow(10,i);
            s -= (temp)*pow(10,i);
        }
    if(res/10 !=0){
        res=F(res);
    }
        return res;
    
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long int a,n;
        cin>>a>>n;
        long int s=pow(a,n);
        long long int res=F(s);
        cout<<res<<"\n";
    }
    return 0;
}
