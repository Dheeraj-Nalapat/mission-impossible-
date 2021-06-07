#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int h,count = 0, count1 = 0, k = 0;
        cin>>h;
        for(int i=1;i<=h;i++){
            count = h-i;
            while(k != 2*i-1){
                  if (count <= h-1){
                     cout << i+k << " ";
                     ++count;
                     }
                  else{
                    ++count1;
                    cout << i+k-2*count1 << " ";
                    }
                 ++k;
               }
        count1 = count = k = 0;
        cout << endl;
        }
    }
    return 0;
}
