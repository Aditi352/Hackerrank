#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    char arr[105][105] = {0};
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
      cin>>arr[i];
          
         }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(((i==0)||(j==0))||(i==n-1)||(j==n-1)){
                
                cout<<arr[i][j];}
                
              else   if((arr[i][j]>arr[i][j+1])&&(arr[i][j]>arr[i][j-1])&&(arr[i][j]>arr[i+1][j])&&(arr[i][j]>arr[i-1][j])){
                     
                   cout<<'X';
                     
                 }
            
            else
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    
    return 0;
}
