//Given an integer n, return true if it is a power of two. Otherwise, return false.

//An integer n is a power of two, if there exists an integer x such that n == 2powerx.
#include<bits/stdc++.h>
using namespace std;

bool checkpower(int n,int a) {
    if(a<=0) {
        return false;
    }
    if(a>n) {
        return false;
    }
    if(a==n) {
        cout<<"yayaya";
        return n;
    }
   checkpower(n,a*2);
}
int main() {
   int ans=checkpower(5,1);
   cout<<ans;
    return 0;
}




    
    



       