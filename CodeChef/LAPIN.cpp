#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        vector<int> v(n);
        map< char, int> starting;
        map< char, int> ending;
        int m=n/2;
        for(int i=0;i<m;i++){
            if(starting.count(s[i])){
                starting[s[i]]++;
            }
            else{
                starting.insert(pair<char, int>(s[i], 1));
            }
            if(ending.count(s[n-1-i])){
                ending[s[n-1-i]]++; 
            }
            else{
                ending.insert(pair<char, int>(s[n-1-i], 1));
            }
        }
        int k=0;
        for(int i=0;i<m;i++){
            if(starting[s[i]]!=ending[s[i]]){
                k=1;
            }
        }
        if(k==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        }
}
