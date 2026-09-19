//butterfly!!
#include<bits/stdc++.h>
using namespace std;

int main () {
    int a;
    int i;
    int b;
    cout<<"TELL ME THE MAXIMUM HALF WIDTH OF BUTTERFLY(IT SHOULD BE EVEN)"<<endl;
    cin>>a;
    for(i=1;i<=a;i++) {
        for(b=1;b<=i;b++) {
            cout<<"*";
        }
        for(b=2*i;b<2*a;b++) {
            cout<<" ";
        }
        for(b=1;b<=i;b++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=a;i++) {
    for(b=i;b<a;b++) {
        cout<<"*";
    }
    for(b=0;b<2*i;b++) {
        cout<<" ";
    }
    for(b=i;b<a;b++) {
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}