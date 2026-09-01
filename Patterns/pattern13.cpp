#include<bits/stdc++.h>
using namespace std;

int main () {
    int i;
    int a;
    int b;
    int c;
    cout<<"TELL ME TILL WHCIH STEP YOU WANNA RUN THE CODE"<<endl;
    cin>>a;
    c=1;
    for(i=1;i<=a;i++) {
        for(b=1;b<=i;b++) {
            cout<<c;
            c=c+1;

        }
        cout<<endl;
    }
 
    return 0;
}



