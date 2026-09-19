#include<bits/stdc++.h>
using namespace std;

int main () {
    int i;
    int a;
    int b;
    int gcd;
    cout<<"ENTER YOUR NUMBERS"<<endl;
    cin>>a;
    cin>>b;
   
        for(i=1;i<=(max(a,b)-min(a,b));i++) {
            if((max(a,b)-min(a,b))%i==0 && min(a,b)%i==0) {
                gcd=i;
            }
        }
        cout<<gcd;
        return 0;
    }
                




