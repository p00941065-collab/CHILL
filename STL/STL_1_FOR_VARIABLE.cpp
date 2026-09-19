#include<bits/stdc++.h>
using namespace std;

int main () {
    
    pair<pair<int,int>,pair<int,pair<int,pair<int,int>>>> p={{1,2},{1,{1,{2,3}}}};
    cout<<p.first.second<<" "<<p.second.first<<" "<<p.second.second.second.second;
    return 0;
}