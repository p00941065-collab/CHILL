#include<bits/stdc++.h>
using namespace std;

int main () {
    int i;
    int a;
    int b;
    int c;
    int d;
    cout<<"Tell me the length and width of rectangle(it should be even)"<<endl;
    cin>>a;
   
    for(i=1;i<=a;i++) {
        if(i<a/2) {
        for(b=i;b<=a/2;b++) {
            cout<<"*";
        }
        
            for(c=2;c<2*i+1;c++) {
                cout<<" ";
            }
        
        for(d=i;d<=a/2;d++) {
            cout<<"*";
        }
        cout<<endl;
    }
    if(i>a/2) {
        for(b=a;b<=2*i;b=b+2) {
            cout<<"*";
        }
        for(c=1;c<=2*(a-i);c++) {
            cout<<" ";
        }
         for(d=a;d<=2*i;d=d+2) {
            cout<<"*";
        }
        cout<<endl;

    }

    }


return 0;
} 


//NOT VERY GOOD SOLUTION 
//MISTAKES->Off-by-One / Middle Row Issue: Using i < a/2 and i > a/2 skips i == a/2, meaning an input like 6 will only print 5 lines instead of 6. Using <= a/2 for the top half ensures the middle boundary rows print correctly.

//Unused Variables: You prompt for "length and width", but only input a. Variable a acts as both dimensions.

//Overly Complex Loop Math: Inner loops like for(b=a; b<=2*i; b=b+2) work, but rely on convoluted step math. Counting stars directly using simple subtraction (e.g., i - a/2 stars) makes your code much easier to read and debug.
// fails at many values
