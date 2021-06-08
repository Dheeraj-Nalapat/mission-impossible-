#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        int i=0,j=0, count=0;

        while(i<str1.size()){
            if(str1[i] == str2[j] ){
                j++;
                if(j==str2.size()){
                    count++; j=0;
                }
            }
            else if(str1[i]==str2[0])
                j=1;
            else
                j=0;
            ++i;
        }
        cout<<count<<"\n";
    }
    return 0;
}
