#include <iostream>

int main() {
    int n;
    std::cout << "enter the size of the mat: ";
    std::cin >> n;
    int mat[50][50] = {0};  
    
    std::cout << "enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> mat[i][j];
        }
    }

    int start = 0, bottom = n - 1, ls = 0, rs = n - 1;
    
    while (start <= bottom && ls <= rs) {
        for (int i = ls; i <= rs; i++) {
            std::cout << mat[start][i] << " ";
        }
        start++;
        
        for (int i = start; i <= bottom; i++) {
            std::cout << mat[i][rs] << " ";
        }
        rs--;
        
        if (start <= bottom) {
            for (int i = rs; i >= ls; i--) {
                std::cout << mat[bottom][i] << " ";
            }
            bottom--;
        }
        
    
        if (ls <= rs) {
            for (int i = bottom; i >= start; i--) {
                std::cout << mat[i][ls] << " ";
            }
            ls++;
        }
    }
    
    return 0;
}