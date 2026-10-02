
#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cout<<"TELL ME HOW MANY ELEMENTS YOU WANNA INPUT"<<"::";
    cin>>n;
    int arr[n];
    cout<<"PLZ ENTER THE MAXIMUM VALUE AT BEGIN"<<":";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        }
   
  int hash[arr[0]+1]={0};
  for(int i=0;i<n;i++) {
    hash[arr[i]]=hash[arr[i]]+1;
  }
  
  while(n--) {
    int number;
    cout<<"ENTER THE NUMBER YOU WANT FREQUENCY OF"<<"::"<<endl;
    cin>>number;
    cout<<"THE FREQUANCY OF NUMBER"<< number;
    cout<<" IS"<<hash[number];
  }
  return 0;
}
    
