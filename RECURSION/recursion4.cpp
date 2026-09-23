#include<bits/stdc++.h>
using namespace std;


void f(int i,int n) {
    if(i>n) return;
   
  
    f(i+1,n);
     cout<<i;
}
int main() {
int i=1;
int n;
cin>>n;
f(i,n);
return 0;
}
