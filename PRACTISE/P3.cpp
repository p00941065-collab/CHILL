//LEETCODE 258
#include<bits/stdc++.h>
using namespace std;

int main() {
    cout<<"ENTER YOUR NUMBER"<<"::";
    int n;
    cin>>n;
    int sum;
    vector<int>v;
    while(true) {
        while(n>=1) {

        int a=n%10;
        

        v.emplace_back(a);
        n=n/10;
        }
         sum=accumulate(v.begin(),v.end(),0);
         if(sum>=10) {
            v.clear();
            n=sum;
            continue;
         }
         if(sum<10) {
            break;
         }
        }
        cout<<sum;
        return 0;
    }

         



