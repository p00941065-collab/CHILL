#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) {
    cin>>arr[i];
   }
    for(int i=0;i<=(n-1);i++) {
        int j=i;
        while(j>0 && arr[j-1]>arr[j]) {
            swap(arr[j-1],arr[j]);
            j=j-1;
        }
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i];
    }
    return 0;
}

//avarage case=O(N)
//WORST CASE O(N^2)
//BEST CASE O(N)