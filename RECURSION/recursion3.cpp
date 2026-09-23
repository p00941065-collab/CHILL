#include<bits/stdc++.h>
using namespace std;

void f(int count) {
    if(count<1) return;
     
    cout<<(count);
    
    count=count-1;
   
    f(count);
}

int main() {
    
    int count;
    cin>>count;
    f(count);
    return 0;
}