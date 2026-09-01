#include<bits/stdc++.h>
using namespace std;

int main () {
    int i;
    int a;
    int b;
    int c;
    int d;
   
    cout<<"TELL ME THE WIDTH OF THE MIDDLE NUMBER"<<endl;
    cin>>a;
    for(i=1;i<=a;i=i+1) {
        for(b=0;b<i;b=b+1) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(c=a;c>=1;c=c-1) {
        for(d=1;d<=c;d=d+1) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
    
    
    
    