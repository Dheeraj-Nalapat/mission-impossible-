#include <iostream>
using namespace std;

int main() {
    int n,k,y=0;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
       if(k==a[i]){
         y++;
       } 
   }
  if(y>0){
      cout<<1<<endl;
  } 
  else{
      cout<<-1<<endl;
  }
  return 0;
}
