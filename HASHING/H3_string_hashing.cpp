#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    string s;
    cout<<"ENTER YOUR STRING";
    cin>>s;
   sort(s.begin(),s.end());
   char max=s.back();
   vector<int>hash(max+1,0);
   for(int i=0;i<s.length();i++) {
    hash[s[i]]=hash[s[i]]+1;
   }
  cout<<"ENTER HOW MANY CHAR U WANNA INPUT"<<":";
  int n;
  cin>>n;

  while(n--) {
    char number;
    cout<<"TELL ME FOR WHICH CHAR U WANNA FIND FREQUENCY"<<":";
    cin>>number;
    cout<<"THE FREQUENCY OF CHAR  "<<number<<"IS "<<hash[number];
  }
  return 0;
}

