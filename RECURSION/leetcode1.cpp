//comma after 3 digits
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int a;
    vector<int>m;
    cout<<"ENTER YOUR NUMBER"<<":::";
    cin>>a;
    int i=0;
    int b;
    while(true) {
    b=a%10;
    a=a/10;
    m.emplace_back(b);
    if(a<1) {
        break;
    }
}
for(int i=0;i<m.size()/2;i++) {
    swap(m[i],m[m.size()-1-i]);
}
for(auto it=m.begin();it!=m.end();it++) {
    if(*it%3==0) {
        cout<<",";
    }

    cout<<*it;
}
    
return 0;
}