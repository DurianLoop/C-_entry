//#include <iostream>
//using namespace std;
//
//// 函数用于乘以两个3x3矩阵
//void multiplyMatrices(int a[3][3], int b[3][3], int c[3][3]) {
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            c[i][j] = 0; // 初始化结果矩阵
//            for (int k = 0; k < 3; k++) {
//                c[i][j] += a[i][k] * b[k][j];
//            }
//        }
//    }
//}
//
//// 打印矩阵
//void printMatrix(int matrix[3][3]) {
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int a[3][3] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//
//    int b[3][3] = {
//        {9, 8, 7},
//        {6, 5, 4},
//        {3, 2, 1}
//    };
//
//    int c[3][3]; // 结果矩阵
//
//    // 调用函数进行矩阵乘法
//    multiplyMatrices(a, b, c);
//
//    // 打印结果矩阵
//    cout << "Matrix a:" << endl;
//    printMatrix(a);
//    cout << "Matrix b:" << endl;
//    printMatrix(b);
//    cout << "Result of matrix multiplication (a * b):" << endl;
//    printMatrix(c);
//
//    return 0;
//}