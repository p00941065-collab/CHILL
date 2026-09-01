#include<bits/stdc++.h>
using namespace std;

int main () {
    cout<<"TILL WHEN YOU WANT TO PRINT THE PATTERN"<<endl;
    int a;
    int b;
    int c;
    int i;

    cin>>a;

    for(i=0;i<a;i++) {
        if(i%2==0) {
            int start=1;
            for(b=0;b<=i;b++) {
                if(b%2==0) {
                    cout<<start;
                }
                else {
                    cout<<(start-1);
                }
            }
        }
        else {
            int start=0;
            for(c=0;c<=i;c++) {
                if(c%2==0) {
                    cout<<start;
                }
                else {
                    cout<<(start+1);
                }
            }
        }
    
cout<<endl;
    }            
            return 0;
}
                   

            
    

    
    
        