#include <iostream>

int main() {

    int n;
    std::cout << "enter the value of n: ";
    std::cin >> n;
    int mat[n][n] = {0};

    std::cout << "enter the elements of the matrix: ";             
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[i][n - 1 - j];
            mat[i][n - 1 - j] = temp;
        }
    }

    std::cout << "the rotated matrix is: " << std::endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;

    
}

