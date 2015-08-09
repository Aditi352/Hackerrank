#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        
        unsigned long long b,w,x,y,z;
        cin>>b>>w>>x>>y>>z;
       
        unsigned long long cost,s;
        
           
        if(x>(y+z)){
            cost = (b*(y+z) + (w*y));
        }
        else if((y>(x+z))){
            cost = ((b*x) + (w*(x+z)));
        }
        else {
            cost = (b*x)+(w*y);
        }
        cout<<cost<<endl;
    }
    return 0;
}
