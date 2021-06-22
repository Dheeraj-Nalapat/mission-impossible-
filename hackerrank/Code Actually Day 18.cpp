#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main() {
    string str,res="";
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            string left=str.substr(0,i);
            string right=str.substr(i+1);
            str = left+right;
            n--;
            i--;
        }
        else{
             string left=str.substr(0,i);
             string right=str.substr(i);
             str = left+"."+right;
             n++;
             i++;
        }
    }
    cout<<str<<endl;
    return 0;
}
