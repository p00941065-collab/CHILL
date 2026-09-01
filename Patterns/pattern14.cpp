#include<bits/stdc++.h>
using namespace std;

int main () {
    char a;
    char b;
    char c;
    char i;

    cout<<"TELL ME TILL WHICH ALPHABET YOU WANNA RUN THE PATTERN"<<endl;
    cin>>a;
    for(i='A';i<=a;i++) {
        for(b='A';b<=i;b++) {
            cout<<b;
        }
    cout<<endl;
    }
    return 0;
}

