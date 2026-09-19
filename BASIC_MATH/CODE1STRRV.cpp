#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int revN=0;
    int last_digit;
    cout<<"ENTER YOUR NUMBER"<<"::";
    cin>>N;
    int original=N;
   while(N>0) {
    last_digit=N%10;
    N=N/10;
    revN=revN*10 + last_digit;
   }
   if(original==revN) {
    cout<<original;
   }
   return 0;
}

