#include <bits/stdc++.h>
using namespace std;

int cnt = 0; 
int n;

void print(int n) { 
    if (cnt == n) return; 
    
    cout << "name\n";
    cnt++;
    
    print(n); 
}

int main() {
    cin >> n;
    print(n);
    return 0;
}