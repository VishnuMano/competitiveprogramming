#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int x, y;
        cin >> x >> y; // number of 1x1 icons (x) and number of 2x2 icons (y)

        // Calculate the minimum number of screens required
        // For 1x1 icons, each icon occupies 1 cell, so total cells required = x
        // For 2x2 icons, each icon occupies 4 cells, so total cells required = 4 * y
        // Total cells required = x + 4 * y
        // To calculate the minimum number of screens, divide the total cells required by the total cells per screen (15 cells per screen)
        // Round up the result to the nearest integer
        int screens = (x + 4 * y + 14) / 15;

        cout << screens << endl;
    }

    return 0;
}