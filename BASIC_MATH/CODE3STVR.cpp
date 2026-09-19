
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int a;
    int i;
    vector<int>v;
    cout<<"ENTER YOUR NUMBER"<<"::";
    cin>>a;
    for(i=1;i<=sqrt(a);i++) {
        if(a%i==0) {
            v.emplace_back(i);
            v.emplace_back(a/i);
        }
    }
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++) {
        cout<<*it<<" ";
        cout<<endl;
    }
    return 0;
}
