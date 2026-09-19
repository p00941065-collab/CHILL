#include<bits/stdc++.h>
using namespace std;

void pattern15() {
    int i;
    int a;
    int b;
    int c;
    cout<<"TILL WHICH STEP YOU WANT THE PATTERN TO PRINT"<<":";
    cin>>a;
    for(i=0;i<a;i++) {
        if(i%2==0) {
            for(b=1;b<=i;b++) {
                if(b%2==0)  {
                    