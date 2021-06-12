#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

void order(string &str)
{
   sort(str.begin(), str.end());
   cout << str<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        order(str);
    }
    return 0;
}
