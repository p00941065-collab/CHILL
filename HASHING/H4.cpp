#include<bits/stdc++.h>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int n;
     map<int,int>mpp;
   cout<<"ENTER THE SIZE OF ARRAY "<<"::";
    cin>>n;
    vector<int>v;
     cout<<"ENTER YOUR ELEMENTS"<<"::";
    for(int i=0;i<n;i++) {
        int s;
        cin>>s;
        v.emplace_back(s);
    }
for(int i=0;i<n;i++) {
    mpp[v[i]]=mpp[v[i]]+1;
}
while(n--)  {
    int number;
    cin>>number;
    cout<<"YOUR NUMBER IS APPERED"<<mpp[number]<<"TIMES IN THE MAP";
}
return 0;
}

