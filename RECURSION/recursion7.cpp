#include<bits/stdc++.h>
using namespace std;

int f(int i) {
    
    
    if(i==0) {
        return 0;
    }
    return i + f(i-1);
}

int main() {
   
    int i;
    cin>>i;
    int ans=f(i);
    cout<<ans;
    return 0;
}

    
