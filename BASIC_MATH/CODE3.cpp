//MAH SOLUTION FOR THIS PROBLEM
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int i;
    cout<<"ENTER YOUR NUMBER"<<"::";
    cin>>a;
    for(i=1;i<=a;i++) {
        if(a%i==0) {
            cout<<i;
            cout<<endl;
        }
        if(a==0) {
            cout<<"0";
        }
    }
    return 0;
}