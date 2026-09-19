#include<bits/stdc++.h>
using namespace std;

int main () {
    int i;
    int a;
    int b;
    int c;
    cout<<"TELL ME THE WIDTH OF THE MIDDLE PORTION(IT SHOULD BE ODD)"<<":";
    cin>>a;
    for(i=1;i<=(a+1)/2;i++) {
        for(b=i;b<(a+1)/2;b++) {
            cout<<" ";
        }
        for(c=1;c<=2*i-1;c++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=1;i<=(a-1)/2;i++) {
        for(c=1;c<=i;c++) {
            cout<<" ";
        }
        for(b=1;b<=a-2*i;b++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
            