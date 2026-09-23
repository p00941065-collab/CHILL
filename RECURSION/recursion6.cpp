#include <bits/stdc++.h>
using namespace std;


void f(int i, int sum, int n) {
    if (i >n) {
        cout << "Sum: " << sum << endl;
        return;
    }
    f(i + 1, sum + i, n);
}

int main() {
    int n;
    cin >> n;
    f(1, 0, n); 
    return 0;
}