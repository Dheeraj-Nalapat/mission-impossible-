#include <cmath>
#include <cstdio>
#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
 /*     map< int, string> map1;
    map1.insert(pair<int, string>(1,"one"));
    map1.insert(pair<int, string>(2,"two" ));
    map1.insert(pair<int, string>(3,"three" ));           //failed attempt in making ditionary
    map1.insert(pair<int, string>(4,"four" ));
    map1.insert(pair<int, string>(5,"five" ));
    map1.insert(pair<int, string>(6,"six" ));
    map1.insert(pair<int, string>(7,"seven" ));
    map1.insert(pair<int, string>(8,"eight" ));
    map1.insert(pair<int, string>(9,"nine" ));
      int n;
      cin>>n;
      map<int, string>::iterator itr;  
      if(n>9){
          cout<<"greater than 9"<<endl;
      }
      else{
          for (itr = map1.begin(); itr != map1.end(); ++itr) {
             if (itr->first == n){
                cout<< itr->second << '\n';
             }
           }
      }
     */
          
    long int a;
    cin>>a;
        if(a==1)
            cout<<"one"<<endl;
    
        else if(a==2)
            cout<<"two"<<endl;
    
        else if(a==3)
            cout<<"three"<<endl;
    
        else if(a==4)
            cout<<"four"<<endl;
    
        else if(a==5)
            cout<<"five"<<endl;
    
        else if(a==6)
            cout<<"six"<<endl;
    
        else if(a==7)
            cout<<"seven"<<endl;
    
        else if(a==8)
            cout<<"eight"<<endl;
        
        else if(a==9)
            cout<<"nine"<<endl;
    
        else if(a>9)
            cout<<"greater than 9"<<endl;
    
        
    }  
    return 0;
}
