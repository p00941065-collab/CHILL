#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int i;
    int b;
    cout<<"TELL THE FIRST N INTERGERS YOU WANT IN FIRST ROW OF THE PATTERN"<<endl;
    cin>>a;
    for(i=a;i>=1;i=i-1) {
        for(b=1;b<=i;b=b+1) {
            cout<<b;
        }
        cout<<endl;
    }
    return 0;
}
