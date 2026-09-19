#include<bits/stdc++.h>
#include<vector>
using namespace std;

void vectorexplain() {
    int a;
    
cout<<"TELL HOW MANY NUMBERS YOU WANNA INPUT"<<":";
cin>>a;

vector<int>v1(a);


for(vector<int>::iterator it=v1.begin();it!=v1.end();it++) {
    cout<<"ENTER YOUR NUMBER"<<":";
    cin>>*(it-1);
}
}
int main () {
    vectorexplain();
    return 0;
}



