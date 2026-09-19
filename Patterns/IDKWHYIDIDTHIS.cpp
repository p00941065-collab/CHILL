#include<bits/stdc++.h>
using namespace std;

int main () {
    int i;
    int a;
    int b;
    int c;
    cout<<"Tell me how many times you wanna repeat the code"<<":";
    cin>>a;
    for(c=1;c<=a;c++) {
    for(i=1;i<=7;i++) {
         if(i<=1) {
            for(b=1;b<=4;b++) {
                cout<<"*";
            }
        }
     else if(i%2==0) {
        for(b=1;b<=4;b++) {
            cout<<" ";
        }
    }
    else if(i==3||i==5){
        for(b=1;b<=1;b++) {
            cout<<"*";
        }
        for(b=1;b<=2;b++) {
            cout<<" ";
        }
        for(b=1;b<=1;b++) {
            cout<<"*";
        }
    }
    else if(i==7) {
        for(b=1;b<=4;b++) {
            cout<<"*";
        }
        } 
         cout<<endl;
    }
}
return 0;
}


