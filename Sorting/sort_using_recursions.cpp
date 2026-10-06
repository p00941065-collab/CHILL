#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void f(int i,int a,int m[],int x) {
    if(a==0) {
        for(int z=0;z<x;z++) {
            cout<<m[z];
        }
        return;
    }

    if(i==a) {
        a=a-1;
        i=0;
}
     if(m[i]>m[i+1]) {
        swap(m[i],m[i+1]);
     }
     f(i+1,a,m,x);

    }

int main() {
    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY"<<":";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)  {
        cin>>arr[i];
    }
    f(0,n,arr,n);

 return 0;
}
