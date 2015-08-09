#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int foo(char arr[]){
    int end = strlen(arr)-1;
    int pos=0,odd=0,k=0,flag;
    int count[26]={};
    while(pos<=end){
        k=(arr[pos] - 'a');
        count[k]++;
     pos++;
    }
    for(int i=0;i<26;i++){
             odd += (count[i]%2);
    }
    if(odd>1)
         flag=0;
    else
         flag=1;
    return flag;
    
    
}
int main() {
   
    char s[100006];
    cin>>s;
     
    int flag;
    flag=foo(s);
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
