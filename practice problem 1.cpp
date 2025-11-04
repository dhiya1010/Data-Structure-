#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[50][50]; 

    cout << "\nEnter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int zeroCount = 0, nonZeroCount = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0)
                zeroCount++;
            else
                nonZeroCount++;
        }
    }

    cout << "\nNumber of zero elements: " << zeroCount;
    cout << "\nNumber of non-zero elements: " << nonZeroCount << endl;

   
    if (zeroCount > nonZeroCount)
        cout << "\nThe matrix is a SPARSE matrix.\n";
    else
        cout << "\nThe matrix is NOT a sparse matrix.\n";

    return 0;
}
