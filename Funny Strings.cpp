#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  stringstream ss;
    int t;
        cin>>t;
    while(t--)
        {
        string s , r;
       
        cin>>s;
        ss<<s;
        string st=ss.str();
         r = string(st.rbegin(),st.rend());
  const char * rchar = r.c_str();
        const char * schar = st.c_str();
        //ut<<rchar<<schar;
        int i,a,b;
        int flag;
        for(i=0;i<=(strlen(schar)-2);i++){
           
            
            a = abs((schar[i]-'0') - (schar[i+1]-'0'));
            b = abs((rchar[i] - '0') -(rchar[i+1]-'0') );
          //  cout<<a<<"\t";
          //  cout<<b<<endl;
            if(a!=b)
                {
                flag = 0;
                break;
            }
              else
                  flag =1;
                 
                     
        };
     if(flag==1)
          cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
    }
    return 0;
}
