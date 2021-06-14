#include <iostream>
using namespace std;
int main() {
int m, n, nums[6][6];
cin>>m>>n;
for(int i=0; i<m; i++)
for(int j=0; j<n; j++)
cin>>nums[i][j];
int temp = nums[0][0];
if(n>1)
for(int i=1; i<n; i++)
nums[0][i-1] = nums[0][i];
if(m>1)
for(int i=1; i<m; i++)
nums[i-1][n-1] = nums[i][n-1];
if(n>1)
for(int i=n-2; i>=0; i--)
nums[m-1][i+1] = nums[m-1][i];
if(n>1){
for(int i=m-2; i>=0; i--)
nums[i+1][0] = nums[i][0];
nums[1][0] = temp;
}

for(int i=0; i<m; i++){
for(int j=0; j<n; j++)
cout<<nums[i][j]<<'\t';
cout<<'\n';
}
return 0;
}
