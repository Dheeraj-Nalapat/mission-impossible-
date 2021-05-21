#include <iostream>
using namespace std;

int main() 
{
 int T,N,X;
 int S[N],R[N];
 cin>>T;
 while (T--)
 {
  int max=0;   
  cin>>N>>X;
  for(int i =0 ; i<N;i++)
  {
  cin>>S[i]>>R[i];
  }
  for(int i =0 ; i<N;i++)
  {
    if (S[i]<=X)
    {
        if (max<R[i])
        {
        max = R[i];
        }
    }
   }
   cout<<max<<endl;
 }
}
