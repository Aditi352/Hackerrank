#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,k,m=1,count=0;
    cin>>t;
    int x=t;
    int visited[26]={0};
   // for(int i = 0;i<26;i++){cout<<visited[i]<<"  ";}
    while(t--){
         char str[104];
        cin>>str;

        int n = strlen(str);
        for(int i=0;i<n;i++){
            k = str[i]-'a';
           // cout<<k<<" ";
            if((visited[k]==(m-1)))
{
                
                visited[k]+=1;

            }
         
         //   cout<<k<<"\t"<<visited[k]<<endl;
        }
    //    cout<<endl;
        m++;
    }
    for(int i=0;i<26;i++){
        if(visited[i]==(x)){
            count++;
        }
    }
    cout<<count;
    return 0;
}
