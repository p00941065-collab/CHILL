#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cout<<"ENTER YOUR NUMBER"<<":::";
    cin>>n;
    vector<int>v;
    if(n<10) {
        cout<<"bruh";
    }
    else {
    while(n>0) {
        int a=n%10;
        v.emplace_back(a);
        n=n/10;
    }
     
    for(int i=0;i<v.size();i++) {
        cout<<v[i];
    }
    }
return 0;
}
 


    