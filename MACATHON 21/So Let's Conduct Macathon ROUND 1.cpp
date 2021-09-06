#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;


int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,k,d;
        cin>>n>>k>>d;
        ll ar[k];
        for(ll i=0;i<k;i++){
            cin>>ar[i];
        }
        sort(ar,ar+k);
        ll res,flag=1,j=0;
        while(flag){
            ll temp=d;
            if(d<ar[j]){
                cout<<1<<"\n";
                flag=0;
            }
            else{
                while(flag){
                    temp=ar[j];
                     if(j==k-1){
                        if(n-ar[k-1]>=d){
                            cout<<ar[k-1]+1<<"\n";
                            flag=0;
                            break;
                        }}
                    else if(j<k){
                      if(ar[j+1]-ar[j]>d){
                        cout<<ar[j]+1<<"\n";
                        flag=0;
                        break;
                    }}
                    
                    else{
                        cout<<-1<<"\n";
                        flag=0;
                        break;
                    }
                    j++;
                }
            }
        }
    }
    return 0;
}
