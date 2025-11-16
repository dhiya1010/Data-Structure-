// Print 2D Array Using Range-Based For Loop:

#include <iostream>
using namespace std;

int main() {
    const int rows = 3, cols = 3;

    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Printing 2D Array using Range-Based For Loop:\n";

    for (auto &row : matrix) {
        for (auto &col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
