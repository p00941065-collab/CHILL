#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    cout<<"TELL ME HOW MANY ELEMENTS YOU WANNA ENTER"<<":";
    int n;
    cin>>n;
  vector<int>m;
  
  cout<<"ENTER THE ELEMENTS"<<":";
  for(int i=0;i<n;i++) {
      int z;
      cin>>z;

      m.push_back(z);

  }
sort(m.begin(), m.end());
    int max_val = m.back();  

   
    vector<int> hash(max_val + 1, 0);


for(int i=0;i<n;i++) {
    hash[m[i]]=hash[m[i]]+1;
}

while(n--) {
    int number;
   cout<<"ENTER THE NUMBER OF WHICH YOU WANNA FIND FREQUENCY OF"<<":";
   cin>>number;
    cout<<"THE FREQUENCY OF THE NUMBER"<<number<<"IS"<<hash[number]<<endl;
}
return 0;
}