#include<bits/stdc++.h>
using namespace std;

int main() {
    char i;
    char a;
    char b;
    cout<<"TELL ME TILL WHEN YOU WANNA PRINT THE PATTERN"<<endl;
    cin>>a;
    for(i='A';i<=a;i=i+1) {
        for(b='A';b<=i;b++) {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
        


