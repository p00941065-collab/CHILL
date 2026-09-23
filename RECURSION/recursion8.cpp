//FACTORIAL PROBLEM
//MY SOLUTION
#include<bits/stdc++.h>
using namespace std;

int f(int m,int i,int n,int z) {
    if(m==n-1) {
        return i;
    }
    
    i=(i)*(z+1);
     
    f(m+1,i,n,z+1);
}
int main() {
 int ans=f(0,1,10,1);
    cout<<ans;
return 0;
}

    






