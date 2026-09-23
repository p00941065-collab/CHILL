#include<bits/stdc++.h>
using namespace std;


void f(int count,int n) {
    if(count>n) return;
    cout<<(count);
    count++;
    f(count,n);
}
int main() {
    int count=1;
    int n;
    cin>>n;
    f(count,n);
return 0;
}

