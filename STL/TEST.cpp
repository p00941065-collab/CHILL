#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2) {
        if(p1.second>p2.second) return false;
        if(p1.second<p2.second) return true;
        if(p1.second==p2.second) {                ///bool comp should be outside the int main()
            if(p1.first>p2.first) return false;
            if(p1.first<p2.first) return true;
    }
    return false;
   }
int main() {
 vector<pair<int,int>> v; 
    
    v.emplace_back(1,1);
    v.emplace_back(6,2);
    v.emplace_back(9,3);
    v.emplace_back(7,2);
    v.emplace_back(3,6);
    sort(v.begin(),v.end(),comp);
    for(auto it=v.begin();it!=v.end();it++) {
      cout<<it->first<<" "<<it->second<<endl;
      
}
   return 0;
}
