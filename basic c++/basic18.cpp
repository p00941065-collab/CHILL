#include<bits/stdc++.h>
using namespace std;

void familymembersinput() {
    cout<<"HOW MANY FAMILY MEMBERS ARE THERE SON::::"<<endl;
    int x;
    cin>>x;
    string arr[x];
    int i;
    int b;

    for(i=1;i<=x;i=i+1) {
        cout<<"ENTER NAME OF THE FAMILY MEMBER  "<<i<<"BRUH:::"<<endl;
        getline(cin >> ws,arr[i-1]);
        
    }
    for(b=1;b<=x;b=b+1) {
        cout<<"YOUR "<<b<<"FAMILY MEMBER IS::"<<arr[b-1]<<endl;
    }


}


  int main() {
    familymembersinput();
    
   return 0;
  }

    
    
    




    

    