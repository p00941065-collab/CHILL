#include <iostream>
#include <algorithm>

using namespace std;

void printPattern(int n) {
    int size = 2 * n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find distance to top, left, bottom, and right edges
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;
            
            // Value is n minus the minimum distance to any border
            int value = n - min({top, left, bottom, right});
            cout << value << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 10;
    printPattern(n);
    return 0;
}

            


