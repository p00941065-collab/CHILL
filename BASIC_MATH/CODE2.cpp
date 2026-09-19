//MAH SOLUTION FOR THIS PROBLEM

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main () {
vector<int>v;
int a;
int n;
int b;
int i;
int c;
vector<int>q;
cout<<"ENTER YOUR NUMBER"<<":::";
cin>>n;
cout<<"ENTER IT AGAIN"<<"::";
cin>>c;


while(n%10>0) {
    a=n%10;
    n=n/10;
    v.emplace_back(a);
}
for(auto it=v.begin();it!=v.end();it++) {
    b=(*it)*(*it)*(*it);
    q.emplace_back(b);
}

 int sum=accumulate(q.begin(),q.end(),0);
 if(sum==c) {
    cout<<"YEH BOI";

 }
 return 0;
}



  
    

    

        