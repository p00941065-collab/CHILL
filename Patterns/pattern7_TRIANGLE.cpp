#include<bits/stdc++.h>
using namespace std;

int main() {
    int i;
    int j;
    int a;
    cout<<"TELL ME HOW MANY STARS WILL BE IN THE BASE  OF THE TRIANGLE"<<endl;
    cin>>a;
    for(i=0;i<a;i++) {
        //space
        for(j=0;j<a-i-1;j++){
        cout<<" ";
        }
        //star
        for(j=0;j<2*i+1;j++){

        cout<<"*";
        }
        //space
       
    cout<<endl;
    }
    return 0;
}
           