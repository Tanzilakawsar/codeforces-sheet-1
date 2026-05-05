#include <iostream>
#include <vector>
using namespace std;

class Matrix {
    private:
        int rows, cols;
        vector<vector<int> > mat;
    public:
        Matrix(int r, int c) : rows(r), cols(c) {
            mat.resize(r, vector<int>(c));
        }
        void setElement(int i, int j, int val) {
            mat[i][j] = val;
        }
        int getRows() {
            return rows;
        }
        int getCols() {
            return cols;
        }
        Matrix add(Matrix m) {
            Matrix result(rows, cols);
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result.setElement(i, j, mat[i][j] + m.mat[i][j]);
                }
            }
            return result;
        }
        Matrix multiply(Matrix m) {
            Matrix result(rows, m.cols);
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < m.cols; j++) {
                    result.setElement(i, j, 0);
                    for (int k = 0; k < cols; k++) {
                        result.mat[i][j] += mat[i][k] * m.mat[k][j];
                    }
                }
            }
            return result;
        }
        void display() {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    int rows, cols;
    cout << "Enter rows and columns of matrix: ";
    cin >> rows >> cols;

    Matrix m1(rows, cols), m2(rows, cols);
    cout << "Enter elements of first matrix: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val;
            cin >> val;
            m1.setElement(i, j, val);
        }
    }

    cout << "Enter elements of second matrix: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val;
            cin >> val;
            m2.setElement(i, j, val);
        }
    }

    cout << "Sum of matrices: " << endl;
    Matrix sum = m1.add(m2);
    sum.display();

    cout << "Product of matrices: " << endl;
    Matrix product = m1.multiply(m2);
    product.display();

    return 0;
}
