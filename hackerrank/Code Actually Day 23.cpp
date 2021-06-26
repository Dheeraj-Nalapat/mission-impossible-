#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double distance(double a1,double b1,double a2,double b2){
    double res=0;
    res=sqrt(pow(a1-a2,2)+pow(b1-b2,2));
    return res;    
}
int main() {
    long int t;
    cin>>t;
    while(t--){
        double x1,x2,x3,x4;
        double y1,y2,y3,y4;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        cin>>x4>>y4;
        double d12,d23,d34,d41,d13,d24;
        d12=distance(x1,y1,x2,y2);
        d23=distance(x2,y2,x3,y3);
        d34=distance(x3,y3,x4,y4);
        d41=distance(x1,y1,x4,y4);
        d13=distance(x1,y1,x3,y3);
        d24=distance(x4,y4,x2,y2);
        if(d12==0 || d23==0 ||d34==0 ||d41==0){
            cout<<"NO"<<"\n";
        }
        else if(d12==d23==d34==d41 && d13==d24){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
