#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

#define ll long long int

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll coins[n], sums = 0;
        for(int i = 0; i < n; i++){
            cin>>coins[i];
            sums+=coins[i];
        }
        if(sums%n)
            cout<<"NO\n";
        else{
            ll count=0, avg=sums/n;
            for(int i = 0; i < n; i++){
                if(coins[i]<avg)
                    count+=avg-coins[i];
            }
            cout<<count<<"\n";
        }
    }
    return 0;
}
