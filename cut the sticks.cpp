#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, arr[1005];
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
   while(1){
       int min = arr[0];
       int count = 0;
       for(int i=0;i<n;i++){
           if(arr[i]!=0)
               count++;
       }
       if(count==0)
           break;
       
       cout<<count<<endl;
      
       for(int i = 0;i<n;i++){
           if((arr[i]!=0)&&(arr[i]<min)){
               min = arr[i];
           }
           if(min==0)
               min=arr[i];
       }
       
       
       for(int i=0;i<n;i++){
           if(arr[i]!=0){
               arr[i] -= min;}
       }
       
   }
    return 0;
}
