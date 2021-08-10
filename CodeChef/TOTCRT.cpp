#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    map<string, int > mp;
	    int temp=3;
	    while(temp--){
	        for(int i=0;i<n;i++){
	            string s;
	            int x;
	            cin>>s>>x;
	            mp[s] +=x;
	        }
	    }
	    vector<int> ans;
	    for(auto [x,y] :mp)
	        ans.push_back(y);
	    sort(ans.begin(),ans.end());     
	    for(auto x: ans)
	        cout<<x<<" ";
	    cout<<"\n";     
	}
	return 0;
}
