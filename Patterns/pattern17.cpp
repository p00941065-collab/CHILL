#include<bits/stdc++.h>
using namespace std;

int main () {
    char a;
    char i;
    char b;
    char c;
    cout<<"TILL WHEN YOU WANT THE PATTERN TO GO"<<endl;
    cin>>a;
    
    for(i='A';i<=a;i++) {
        for(c=a;c>=i;c=c-1){
            cout<<" ";
        } 
        for(b='A';b<=i;b++) {
            cout<<b;
        } 
        if(i>='B') {
        for(c=(i-1);c>='A';c=c-1) {
            cout<<c;
        }
    }
    cout<<endl;
}
return 0;
}
