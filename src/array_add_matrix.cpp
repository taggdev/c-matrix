
#include <iostream>
#include "iomanip"

using namespace std;

class MatrixSample {

public:
    void matrixIdentity() {
        int a[3][3] = {0};

        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                if (row == col) {
                    a[row][col] = 1;
                }

                cout << setw(4) << a[row][col] << " |";
            }
            cout << endl;
        }
    }

    void matrixAdd() {
        int a[2][3] = {
                {7,  6,  8},
                {20, 25, 10}
        };

        int b[][3] = {
                {5,  8,  1},
                {10, 20, 30}
        };

        size_t rows = sizeof(a) / sizeof(a[0]);
        size_t cols = sizeof(a[0]) / sizeof(a[0][0]);
        int c[rows][cols];
//    cout << rows << endl;
//    cout << cols << endl;

        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                c[row][col] = a[row][col] + b[row][col];
                cout << setw(4) << c[row][col] << " |";
            }
            cout << endl;
        }

    }
};

    int main(int argc, char *argv[]) {
        MatrixSample sample = *new MatrixSample();

        cout << "Add Matrix" << endl;
        sample.matrixAdd();
        cout << endl;
        cout << "Identity Matrix" << endl;
        sample.matrixIdentity();

        return 0;
    }
