#include<bits/stdc++.h>
using namespace std;


int main() {
    int i;
    int a;
    int b;
    cout<<"TELL ME TILL WHEN YOU WANNA PRINT THE PATTERN"<<endl;
    cin>> a;

    for(i=1;i<=a;i++) {
        for(b=1;b<=i;b++) {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}

