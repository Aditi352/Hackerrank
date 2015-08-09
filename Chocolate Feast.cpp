#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        
       int answer = n/c;
        int wrap_no = answer ;
        
        while(wrap_no>=m){
        
            wrap_no -= m;
            answer++;
            wrap_no += 1;
            
         
        
        }
        // Computer answer
        
        cout<<answer<<endl;
    }
    return 0;
}
