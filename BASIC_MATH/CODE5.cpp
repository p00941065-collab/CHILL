//NOT ABLE TO CREATE MY SOLUTION FOR THIS PROBLEM

#include<bits/stdc++.h>
using namespace std;
int main() {
    int i;
    int a;
    int b;
    int gcd;
    cout<<"ENTER THE NUMBERS"<<":::";
    cin>>a;
    cin>>b;
    for(i=1;i<=max(a,b);i++) {  //we can use i=max(a,b)
        if(a%i==0&&b%i==0) {
            gcd=i;
        }
    }
    cout<<gcd;
    return 0;
}
            
            

