#include<bits/stdc++.h>
using namespace std;

int main () {
    char i;
    char a;
    char b;
    cout<<"TELL ME FROM  WHERE YOU WANNA START THE PATTERN"<<endl;
    cin>>a;
   for(i=a;i>='A';i=i-1) {
    for(b=a;b>=i;b=b-1) {
        cout<<b;
    }
    cout<<endl;
}
return 0;
}