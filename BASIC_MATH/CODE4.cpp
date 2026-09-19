#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int i;
    cout<<"ENTER YOUR NUMBER"<<":::";
    cin>>a;
  
    for(i=1;i<=a;i++) {
        
        if(a%i==0 && i<a && i>1) {
            cout<<"NOT A PRIME";
            break;
         }
       if(i==a) {
        cout<<"PRIME";
       }    
        }
    
return 0;
}


        
      