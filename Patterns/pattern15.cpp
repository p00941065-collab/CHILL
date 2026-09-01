#include<bits/stdc++.h>
using namespace std;

int main () {
    char i;
    char a;
    char b;
    cout<<"TELL ME TILL WHEN YOU WANNA END THE PATTERN"<<endl;
    cin>>a;
    for(i=a;i>='A';i=i-1) {
        for(b='A';b<=i;b++) {
            cout<<b;
        }
        cout<<endl;
    }
    return 0;
}

    