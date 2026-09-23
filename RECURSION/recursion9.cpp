//REVERSE AN ARRAY
//MY SOLUTION OF THIS PROBLEM
#include<bits/stdc++.h>
using namespace std;

void f(int s,int n,int t,int r[]) {
    
    if(s>=t) {
        
        return ;
}

swap(r[s],r[t]);
f(s+1,n,t-1,r);
}
int main() {
    int i;
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANNA INPUT IN ARRAY"<<"::";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++) {
        cin>>arr[i];
    }
    f(0,n,(n-1),arr);
     for(int i=0;i<n;i++) {
            cout<<arr[i];
        }

    return 0;
}