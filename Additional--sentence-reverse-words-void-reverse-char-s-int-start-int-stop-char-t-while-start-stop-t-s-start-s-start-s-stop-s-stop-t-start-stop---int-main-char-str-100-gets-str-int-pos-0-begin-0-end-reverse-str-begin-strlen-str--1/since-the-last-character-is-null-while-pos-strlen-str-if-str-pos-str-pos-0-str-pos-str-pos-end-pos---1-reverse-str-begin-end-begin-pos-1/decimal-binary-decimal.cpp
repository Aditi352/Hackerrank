#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number,n=0;
    string bin;
    char holder;
    cin>>number;
    while(number!=0)
    {
        holder=number%2+'0';
        bin=holder+bin;
        number/=2;
        cout<<holder<<"  "<<bin<<endl;
    }
    cout<<bin<<endl;
    int i=1,b;
   b = stoi(bin) ;
    while(b>0){
        n += (b%10)*i;
        b=b/10;
        i=i*2;
    }
    cout<<n;
    return 0;
}
