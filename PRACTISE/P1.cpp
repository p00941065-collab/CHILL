//LEETCODE 1838

#include<bits/stdc++.h>
#include<map>
using namespace std;

int main() {
    map<int,int>mpp;
    cout<<"TELL ME HOW MANY ELEMENTS YOU WANNA ENTER"<<"::";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
for(int i=0;i<n;i++) {
    mpp[arr[i]]=mpp[arr[i]]+1;
}
cout<<"TELL ME OF HOW MANY NUMBERS YOU WANNA CHECK THE FREQUENCY"<<":::";
int q;
cin>>q;

while(q--) {
    int number;
    cout<<"ENTER THE NUMBER YOU WANNA FIND FREQUENCY OF"<<"::";
    cin>>number;
    cout<<"THE FREQUENCY OF THE "<<  number <<" is "<<mpp[number];
}
return 0;
}



