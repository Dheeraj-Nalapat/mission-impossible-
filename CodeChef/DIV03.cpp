#include <iostream>
using namespace std;

int main() {
  int x,k;    
  cin>>x;
  int D[10];
  for(int y=0;y<x;y++)
 {
     int sum =0;
    for(int i=0;i<10;i++)
    {
        cin>>D[i];
    }
    cin>>k;
    for(int i=9;i>=0;i--)
    {
    sum += D[i] ;   
    if (sum > k)
    {
     cout<<i+1<<"\n";
     break;
    }
    }
 } 
}
