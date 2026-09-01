#include<bits/stdc++.h>
using namespace std;

int main () {
    int a;
    int b;
    int c;
    int i;
    int d;
    int e;
    int f;
    cout<<"TELL ME THE WIDTH OF MIDDLE PORTION OF THE DIAMOND(IT SHOULD BE ODD)"<<endl;
    cin>>a;
    for(i=1;i<=a;i++) {
        for(b=1;b<=(a+1-i);b=b+1) {
            cout<<" ";
        }
        
      
        for(c=0;c<2*i-1;c=c+1) {
            cout<<"*";
        }
    
        cout<<endl;
    }
    


    for (d=0;d<a;d=d+1) {
        for(e=0;e<a+1-(a-d);e=e+1) {
            cout<<" ";
        }
        for(f=1;f<=2*a-(2*d+1);f=f+1) {
        cout<<"*";
        }
      cout<<endl;
    }
    return 0;

}

    
