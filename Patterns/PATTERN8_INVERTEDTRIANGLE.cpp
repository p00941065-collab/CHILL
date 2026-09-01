#include<bits/stdc++.h>
using namespace std;

int main()  {
    int i;
    int a;
    int b;
    int c;
    int m;
    cout<<"TELL ME THE NUMBER OF STARS IN BASE OF THE TRIANGLE(IT SHOULD BE ODD)"<<endl;
    cin>>a;
    for(i=a;i>=1;i=i-2) {

        for(c=0;c<=(a-i)/2;c++) {
        cout<<" ";
      }
        
        
        for(b=1;b<=i;b++) {
            
            cout<<"*";
          

      
        
    }
    cout<<endl;
}
    
    return 0;
    
}





