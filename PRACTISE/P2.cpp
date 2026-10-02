#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"ENTER YOUR NUMBER"<<":::";
    cin>>n;
    int revno=0;
    while(n>0) {
         int last_digit=n%10;
        revno=revno*10+last_digit;
        n=n/10;
        }
       cout<<revno;
return 0;
}