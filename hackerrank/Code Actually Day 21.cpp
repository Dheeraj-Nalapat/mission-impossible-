#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxsum(int a[], int n)
{
    int max = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (max < sum)
            max = sum;
 
        if (sum < 0)
            sum = 0;
    }
    return max;
}
 

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int res = maxsum(arr, n);
        cout << res<<"\n";
    }
    return 0;
}
    
