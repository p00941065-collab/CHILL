#include<bits/stdc++.h>
using namespace std;

int main () {
int a;
int b;
int c;
int i;
int e;
cout<<"TELL ME WHATS THE LIMIT OF PATTERNS"<<endl;
cin>>a;
for(i=1;i<=a;i++) {
    for(b=1;b<=i;b++) {
        cout<<b;
    }
    for(c=0;c<2*a-2*i;c++) {
        cout<<" ";
    }
    for(e=i;e>=1;e=e-1) {
        cout<<e;
    }

 cout<<endl;
}
return 0;
}