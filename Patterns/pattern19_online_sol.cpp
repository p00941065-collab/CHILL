#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    // Upper Half
    for (int i = 0; i < n; i++) {
        // Stars
        for (int j = 0; j < n - i; j++) cout << "*";
        // Spaces
        for (int j = 0; j < 2 * i; j++) cout << " ";
        // Stars
        for (int j = 0; j < n - i; j++) cout << "*";
        cout << endl;
    }

    // Lower Half
    for (int i = 0; i < n; i++) {
        // Stars
        for (int j = 0; j <= i; j++) cout << "*";
        // Spaces
        for (int j = 0; j < 2 * (n - i - 1); j++) cout << " ";
        // Stars
        for (int j = 0; j <= i; j++) cout << "*";
        cout << endl;
    }

    return 0;
}