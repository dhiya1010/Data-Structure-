// Matrix Multiplication Using Functions

#include <iostream>
using namespace std;


void enterData(int first[][10], int second[][10],
               int r1, int c1, int r2, int c2);

void multiplyMatrices(int first[][10], int second[][10], int result[][10],
                      int r1, int c1, int r2, int c2);

void displayResult(int result[][10], int r1, int c2);

int main() {

    int first[10][10], second[10][10], result[10][10];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    
    while (c1 != r2) {
        cout << "Error! Column of first matrix must equal row of second.\n";
        cout << "Enter again:\n";
        cout << "First matrix (rows cols): ";
        cin >> r1 >> c1;
        cout << "Second matrix (rows cols): ";
        cin >> r2 >> c2;
    }

    
    enterData(first, second, r1, c1, r2, c2);
    multiplyMatrices(first, second, result, r1, c1, r2, c2);
    displayResult(result, r1, c2);

    return 0;
}


void enterData(int first[][10], int second[][10],
               int r1, int c1, int r2, int c2) {

    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++) {
            cout << "a" << i+1 << j+1 << ": ";
            cin >> first[i][j];
        }

    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++) {
            cout << "b" << i+1 << j+1 << ": ";
            cin >> second[i][j];
        }
}


void multiplyMatrices(int first[][10], int second[][10], int result[][10],
                      int r1, int c1, int r2, int c2) {

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;

   
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                result[i][j] += first[i][k] * second[k][j];
}



void displayResult(int result[][10], int r1, int c2) {
    cout << "\nOutput Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
}
