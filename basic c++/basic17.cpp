#include<bits/stdc++.h>
using namespace std;


void takearrayinput() {
    int i;
    int size;
    cout<<"tell me how many times you wanna give me input->"<<endl;
    cin>>size;
    string arr[size];
    for(i=1;i<=size;i++) {
        cout<<"enter you name"<<endl;
        
        getline(cin,arr[i]);
        cout<<arr[i]<<endl;
    }
}
    int main() {
        
        takearrayinput();
         
        return 0;
    }
        
