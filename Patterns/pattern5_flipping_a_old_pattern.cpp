#include<bits/stdc++.h>
using namespace std;

int main() {
int i;
int a;
int b;

cout<<"TELL ME NO OF STARS IN FIRST ROW"<<endl;
cin>>a;
for(i=a;i>=1;i=i-1){
    for(b=1;b<=i;b=b+1){
        cout<<"*";
    }
cout<<endl;
}
return 0;
}