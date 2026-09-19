#include<bits/stdc++.h>
using namespace std;

int main() {
int a;
int b;
int v;
int j;
int gcd;
int i;
int s;

int p;cin>>a;
cin>>b;
int m=max((max(a,b)-min(a,b)),min(a,b));
for(i=1;i<=m;i++) {
   v= m-i;
   p=v;
}
for(j=1;j<=min(a,b);j++) {
    if(p%j==0&&min(a,b)%j==0) {
        s=j;
    }
}
cout<<s;
return 0;

}
//WE WILL FIX THIS TOMMROW
