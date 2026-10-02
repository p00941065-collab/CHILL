#include<bits/stdc++.h>
#include<map>
using namespace std;

int main() {
    int n;

    map<char,int>mpp;
    cout<<"HOW MANY ELEMENTS YOU WANNA ENTER"<<"::";
    cin>>n;
   char arr[n];
   for(int i=0;i<n;i++) {
    cin>>arr[i];
   }
   
 for(int i=0;i<n;i++) {
    mpp[arr[i]]=mpp[arr[i]] +1;
 }

 cout<<"TELL ME NUMBER OF INPUTS"<<"::";
int q;
cin>>q;

while(q--) {
    char ask;

    cout<<"ENTER THE CHAR YOU WANNA FIND FREQUENCY OF"<<"::";
    cin>>ask;

    cout<<"THE NO OF TIMES "<<ask<<" appered in the map is"<<mpp[ask];

}
return 0;
}

 
