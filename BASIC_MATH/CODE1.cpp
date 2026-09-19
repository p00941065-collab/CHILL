
//MAH SOLUTION FOR THIS PROBLEM


#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int a;
    int b;
    vector<int> s;
    vector<int> n;

    cout<<"ENTER YOUR NUMBER"<<":";
    cin>>a;
    if(a==0) {
        cout<<"DIE MF ITS A PAALLINDROM";
    }
    else if(a<0) {
        cout<<"NOT A PALLINDROM";
    }
    else{
    while(true)  {
        b=a%10;
        a=a/10;
        s.emplace_back(b);
   if(a<1) break;
    }
  n.insert(n.begin(),s.rbegin(),s.rend());
  if(s==n) {
    for(auto it=s.begin();it!=s.end();it++) {
        cout<<*it;
    }
}

else  {
    cout<<"BRUH";
}
    }
return 0;
}



