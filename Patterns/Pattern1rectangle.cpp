#include <bits/stdc++.h>
using namespace std;

//Lets print rectangle pattern
int main() {

int i;
int a;
int b;
int c;
cout<<"TELL ME NO OF ROWS"<<endl;
cin>>a;
cout<<"TELL ME NO OF COLUMNS"<<endl;
cin>>b;

for(i=1;i<=a;i++) {
     

    for(c=1;c<=(b);c++) {
        cout<<"*";
    }
   cout<<endl;
}

return 0;
}