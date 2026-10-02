//include map
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main() {
    string s;
    map<char,int>mpp;
    cout<<"ENTER YOUR STRING"<<"::";
    cin>>s;
    for(int i=0;i<s.length();i++) {
    mpp[s[i]]=mpp[s[i]] +1;
    }
    cout<<"TELL ME THE NUMBER OF INPUTS YOU WANNA GIVE"<<"::";
    int q;
    cin>>q;
    while(q--) {
        char ask;
        cout<<"TELL ME THE CHAR OF WHICH YOU WANNA FIND THE FREQUENCY"<<"::";
        cin>>ask;
        cout<<"THE FREQUENCY OF CHAR IS "<<mpp[ask];
    }
    return 0;
}

