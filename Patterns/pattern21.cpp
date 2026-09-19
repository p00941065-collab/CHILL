#include<bits/stdc++.h>
using namespace std;;

int main () {
    int i;
    int a;
    int b;
    cout<<"ENTER THE LENGTH AND WIDTH OF RECTANGLE"<<":";
    cin>>a;
    for(i=1;i<=a;i++) {
        if(i==1) {
            for(b=1;b<=a;b++) {
                cout<<"*";
            }
        }
        else if(i<a) {
            for(b=1;b<=1;b++) {
                cout<<"*";
            }
            for(b=1;b<=(a-2);b++) {
                cout<<" ";
            }
            for(b=1;b<=1;b++) {
                cout<<"*";
            }
        }
        else if(i==a) {
            for(b=1;b<=a;b++) {
                cout<<"*";
            }
        }
        cout<<endl;
    }
        return 0;
    }