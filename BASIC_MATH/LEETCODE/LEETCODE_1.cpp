//Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

//Example 1:

//Input: num = 38
//Output: 2
//Explanation: The process is
//38 --> 3 + 8 --> 11
//11 --> 1 + 1 --> 2 
//Since 2 has only one digit, return it.



#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    vector<int>m;
    int a;
    int s;
    int sum;
    cout<<"ENTER YOUR NUMBER"<<"::";
    cin>>a;
    
        while(true) {
            
        m.emplace_back(a%10);
        a=a/10;
           if(a<1) {
            break;
        }
    }
        sum=accumulate(m.begin(),m.end(),0);
           if(sum>=10) {
            m.clear();
         }
        if(sum<10) {    
            cout<<sum;
        }
         
        
        while(sum>=10) {
            while(true) {
                m.emplace_back(sum%10);
                sum=sum/10;
                if(sum<1) {
                    sum=accumulate(m.begin(),m.end(),0);
                    if(sum<10) {
                        cout<<sum;
                        break;
                    }
                if(sum>=10) {
                    
                    m.clear();
                    continue;
                }
            }
        }
    }
    return 0;
    
}
         
        
    






